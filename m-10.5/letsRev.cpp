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
void insertNode(Node *&head, Node *&tail, int val)
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
void printNodes(Node *head, Node *tail)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;

    // curr = tail;
    // while (curr != NULL)
    // {
    //     cout << curr->value << " ";
    //     curr = curr->prev;
    // }
    // cout << endl;
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
void revNodes(Node *head, Node *tail)
{
    int c = 0;
    for (Node *i = head, *j = tail; c < size(head) / 2; i = i->next, j = j->prev)
    {
        swap(i->value, j->value);
        c++;
    }
}
void revNodesalt(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
    swap(i->value, j->value);
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insertNode(head1, tail1, n);
    }
    revNodesalt(head1, tail1);
    printNodes(head1, tail1);

    // printNodes(head2, tail2);

    return 0;
}