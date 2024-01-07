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
int sizeOf(Node *head)
{
    int c = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        c++;
    }
    return c;
}
void printNode(Node *head, Node *tail)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->val << " ";
    }
    cout << endl;
    for (Node *i = tail; i != NULL; i = i->prev)
    {
        cout << i->val << " ";
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

void insertTail(Node *&head, Node *&tail, int val)
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
}

void insertNode(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        insertHead(head, tail, val);
        printNode(head, tail);
        return;
    }
    if (pos > sizeOf(head))
    {
        cout << "Invalid" << endl;
        return;
    }
    if (pos == sizeOf(head))
    {
        insertTail(head, tail, val);
        printNode(head, tail);
        return;
    }
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
    printNode(head, tail);
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
        insertNode(head1, tail1, pos, val);

        n--;
    }

    return 0;
}