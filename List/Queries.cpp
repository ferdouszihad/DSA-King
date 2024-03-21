#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int sizeOf(Node *head)
{
    int size = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        size++;
    }
    return size;
}
void insert_Head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void insert_Tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void deleteNode(Node *&head, Node *&tail, int val)
{

    // for (int i = 1; i <= val - 1; i++)
    // {
    //     current = current->next;
    //     if (current == NULL)
    //         return;
    // }
    // if (current->next == NULL)
    // {
    //     return;
    // }
    // Node *deleteNode = current->next;
    // current->next = current->next->next;
    // delete deleteNode;
    // cout << "deleting head" << val << endl;
    Node *current = head;
    if (current == NULL)
    {
        return;
    }
    if (val == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    int c = 0;
    while (current->next != NULL)
    {
        if (c == val - 1)
        {
            Node *deleteNode = current->next;
            current->next = current->next->next;
            delete deleteNode;
        }

        if (current->next == NULL)
            break;
        current = current->next;
        c++;
    }

    tail = current;
}

void printList(Node *head)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->value << " ";
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;

    while (q > 0)
    {
        int opt, val;
        cin >> opt >> val;

        if (opt == 0)
        {
            insert_Head(head, tail, val);
        }
        else if (opt == 1)
        {
            insert_Tail(head, tail, val);
        }
        else if (opt == 2)
        {

            deleteNode(head, tail, val);
        }
        printList(head);

        q--;
    }

    return 0;
}