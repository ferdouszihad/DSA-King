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

void printList(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}
void insertHead(Node *&head, int val)
{
    Node *newHead = new Node(val);
    newHead->next = head;
    head = newHead;
}

void insertAtPosition(Node *head, int pos, int val)
{
    Node *current = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        current = current->next;
        if (current == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    Node *newNode = new Node(val);
    newNode->next = current->next;
    current->next = newNode;
}

void insertNewNode(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return;
}

int main()
{
    int num;
    Node *head = NULL;
    while (1)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        insertNewNode(head, num);
    }
    int q;
    cin >> q;
    while (q > 0)
    {
        int pos, value;
        cin >> pos >> value;
        if (pos == 0)
        {
            insertHead(head, value);
            printList(head);
        }
        else
        {

            insertAtPosition(head, pos, value);
            printList(head);
        }

        q--;
    }

    return 0;
}