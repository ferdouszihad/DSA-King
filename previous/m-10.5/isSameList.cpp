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

bool isSame(Node *head1, Node *head2)
{
    Node *c1 = head1;
    Node *c2 = head2;
    while (c1 != NULL && c2 != NULL)
    {
        if (c1->value != c2->value)
            return false;
        c1 = c1->next;
        c2 = c2->next;
    }

    if (c1 == NULL && c2 == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insertNode(head1, tail1, n);
    }
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insertNode(head2, tail2, n);
    }

    isSame(head1, head2) == true ? cout << "True" << endl : cout << "False" << endl;

    // printNodes(head1, tail1);
    // printNodes(head2, tail2);

    return 0;
}