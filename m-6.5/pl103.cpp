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

void printMidValue(Node *head)
{
    int c = 0;
    Node *current = head;
    while (current != NULL)
    {
        current = current->next;
        c++;
    }
    // cout << c << endl;

    if (c % 2 == 1)
    {
        current = head;
        for (int i = 0; i < c / 2; i++)
        {
            current = current->next;
        }
        cout << current->value << endl;
    }
    else
    {
        current = head;
        for (int i = 0; i < c / 2 - 1; i++)
        {
            current = current->next;
        }
        cout << current->value << " " << current->next->value << endl;
    }
}

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
    return;
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
    printMidValue(head);

    return 0;
}