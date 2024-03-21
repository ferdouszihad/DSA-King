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

int findValue(Node *head, int searchValue)
{
    int pos = 0;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->value == searchValue)
        {
            return pos;
        }
        else
        {
            pos++;
        }
    }
    return -1;
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
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
        int search;
        cin >> search;

        cout << findValue(head, search) << endl;

        t--;
    }

    return 0;
}