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
void insert(Node *&head, Node *&tail, int val)
{
    Node *newElement = new Node(val);
    if (head == NULL)
    {
        head = newElement;
        tail = newElement;
    }
    else
    {
        tail->next = newElement;
        tail = newElement;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int num;
        cin >> num;
        if (num == -1)
            break;
        insert(head, tail, num);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        cout << i->value << "-" << i->next << endl;
        cout << "now printing " << i->next->value << endl;
    }

    return 0;
}