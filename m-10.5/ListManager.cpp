#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printNodes(Node *head, Node *tail)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;

    curr = tail;
    while (curr != NULL)
    {
        cout << curr->value << " ";
        curr = curr->prev;
    }
    cout << endl;
}
void insertNodeatTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    printNodes(head, tail);
}
void insertNodeatHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    printNodes(head, tail);
}
int size(Node *mainHead)
{
    int c = 0;
    Node *head = mainHead;
    while (head != NULL)
    {

        c++;
        head = head->next;
    }
    return c;
}
void insertNodeatPos(Node *&head, Node *&tail, int val, int pos)
{
    int length = size(head);
    if (pos == 0)
    {
        insertNodeatHead(head, tail, val);
    }
    else if (pos > length)
    {
        cout << "invalid" << endl;
    }
    else if (pos == length)
    {
        insertNodeatTail(head, tail, val);
    }
    else
    {
        Node *curr = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            curr = curr->next;
        }
        Node *newNode = new Node(val);
        newNode->prev = curr;
        newNode->next = curr->next;
        curr->next->prev = newNode;
        curr->next = newNode;
        printNodes(head, tail);
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int n;
    cin >> n;

    while (n > 0)
    {

        int pos, val;
        cin >> pos >> val;
        insertNodeatPos(head1, tail1, val, pos);
        n--;
    }

    // printNodes(head2, tail2);

    return 0;
}