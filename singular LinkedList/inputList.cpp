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

void insert(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = n;
}

void print(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            print(head);
            break;
        }
        insert(head, val);
    }

    return 0;
}