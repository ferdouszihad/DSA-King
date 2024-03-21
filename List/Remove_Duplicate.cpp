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
void printList(Node *head)
{

    for (Node *i = head; i != NULL; i = i->next)
    {
        cout << i->value << " ";
    }
    cout << endl;
}
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
        Node *tmp = i;

        while (tmp->next != NULL)
        {
            // printList(head);
            if (tmp->next->value == i->value)
            {

                tmp->next = tmp->next->next;

                if (tmp->next == NULL)
                {
                    // cout << tmp->value << "- Null" << endl;
                    break;
                }
            }
            else
            {

                tmp = tmp->next;
            }
        }
        // cout << endl;
        if (i->next == NULL)
        {
            break;
        }
    }
    printList(head);

    return 0;
}