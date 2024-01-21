#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *curr = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        curr = curr->next;
    }
    newNode->prev = curr;
    newNode->next = curr->next;
    curr->next->prev = newNode;
    curr->next = newNode;
}
int sizeOf(Node *head)
{
    int size = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        size++;
        curr = curr->next;
    }
    return size;
}

void printFull(Node *head, Node *tail)
{
    Node *curr = head;
    cout << "L -> ";
    while (curr != NULL)
    {
        cout << curr->val;
        if (curr->next != NULL)
            cout << " ";
        curr = curr->next;
    }
    cout << "\n";
    cout << "R -> ";
    curr = tail;
    while (curr != NULL)
    {
        cout << curr->val;
        if (curr->prev != NULL)
            cout << " ";
        curr = curr->prev;
    }
    cout << endl;
}

void insertHead(Node *&head, Node *&tail, int val)
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
}
void insertTail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;
    while (q > 0)
    {
        int pos, val;
        cin >> pos >> val;

        int size = sizeOf(head);
        if (pos == 0)
        {
            insertHead(head, tail, val);
            printFull(head, tail);
        }
        else if (pos == size)
        {
            insertTail(tail, val);
            printFull(head, tail);
        }
        else if (pos < size)
        {
            insert(head, pos, val);
            printFull(head, tail);
        }
        else
        {
            cout << "Invalid\n";
        }

        q--;
    }

    return 0;
}