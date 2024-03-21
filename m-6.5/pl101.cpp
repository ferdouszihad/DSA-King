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

int countNode(Node *head)
{
    Node *current = head;
    int c = 0;
    while (current != NULL)
    {
        c++;
        current = current->next;
    }
    return c;
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
    cout << countNode(head) << endl;

    return 0;
}