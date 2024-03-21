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

int sizeOf(Node *head)
{
    int size = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        size++;
    }
    return size;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int num;
        cin >> num;
        if (num == -1)
            break;
        insert(head1, tail1, num);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int num;
        cin >> num;
        if (num == -1)
            break;
        insert(head2, tail2, num);
    }
    if (sizeOf(head1) != sizeOf(head2))
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        for (Node *i = head1, *j = head2; i != NULL; i = i->next, j = j->next)
        {
            if (i->value != j->value)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}