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
void print(Node *head)
{
    cout << "~~~~~~~~~~~~~~~~" << endl;
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << " ";

        current = current->next;
    }
    cout << endl
         << "~~~~~~~~~~~~~~~~" << endl;
}

void print_by_recursion(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *current = head;
    print_by_recursion(current->next);
    cout << current->value << " ";
    return;
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
        {
            break;
        }
        insert(head, tail, num);
    }
    // int n = 8;
    // int a[n] = {11, 2, 31, 14, 51, 16, 7, 18};

    if (head != NULL)
    {
        for (Node *i = head; i->next != NULL; i = i->next)
        {
            for (Node *j = i->next; j != NULL; j = j->next)
            {

                if (i->value > j->value)
                {
                    swap(i->value, j->value);
                }
            }
        }
    }

    print(head);

    return 0;
}