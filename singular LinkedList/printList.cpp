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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(40);
    Node *c = new Node(60);
    Node *d = new Node(80);
    Node *e = new Node(100);
    // Node *e = new Node(110);
    // cout << e->value << endl;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node *current = head;

    while (current != NULL)
    {
        cout << current->value << endl;
        current = current->next;
    }

    return 0;
}