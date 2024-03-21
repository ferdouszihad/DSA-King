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
int findMax(Node *head)
{
    int max = INT32_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->value > max)
        {
            max = i->value;
        }
    }
    return max;
}
int findMin(Node *head)
{
    int min = INT32_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->value < min)
        {
            min = i->value;
        }
    }
    return min;
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

    if (head == NULL)
    {
        cout << 0 << endl;
        return 0;
    }

    int max = findMax(head);
    int min = findMin(head);
    cout << max - min << endl;

    return 0;
}