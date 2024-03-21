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

void insertNewNode(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
}

bool checkSorted(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *c = head;

    while (c->next != NULL)
    {
        if (c->value > c->next->value)
        {
            return false;
        }
        c = c->next;
    }

    return true;
}

int main()
{
    int num;
    Node *head = NULL;
    while (1)
    {
        cin >> num;
        if (num == -1)
        {
            break;
        }
        insertNewNode(head, num);
    }
    checkSorted(head) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}