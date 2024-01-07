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

void insertNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
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
int sizeOf(Node *head)
{
    int c = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        c++;
    }
    return c;
}

void checkSame(Node *head1, Node *head2)
{
    if (sizeOf(head1) != sizeOf(head2))
    {
        cout << "NO" << endl;
        return;
    }
    for (Node *i = head1, *j = head2; i != NULL; i = i->next, j = j->next)
    {
        if (i->val != j->val)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (1)
    {
        int c;
        cin >> c;
        if (c == -1)
            break;
        insertNode(head1, tail1, c);
    }
    while (1)
    {
        int c;
        cin >> c;
        if (c == -1)
            break;
        insertNode(head2, tail2, c);
    }

    checkSame(head1, head2);

    return 0;
}