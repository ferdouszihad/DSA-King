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
void sort(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
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

    sort(head1);

    printNodes(head1, tail1);

    // printNodes(head2, tail2);
    return 0;
}