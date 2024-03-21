#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertNode(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void printNodes(Node *head, Node *tail)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->value << " ";
        curr = curr->next;
    }
    cout << endl;

    // curr = tail;
    // while (curr != NULL)
    // {
    //     cout << curr->value << " ";
    //     curr = curr->prev;
    // }
    // cout << endl;
}
int size(Node *mainHead)
{
    int c = 0;
    Node *head = mainHead;
    while (head != NULL)
    {

        c++;
        head = head->next;
    }
    return c;
}
bool isPalindrom(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        if (i->value != j->value)
        {
            return false;
        }
        i = i->next;
        j = j->prev;
    }
    if (i->value != j->value)
        return false;
    return true;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insertNode(head1, tail1, n);
    }
    printNodes(head1, tail1);

    isPalindrom(head1, tail1) ? cout << "TRUE" << endl : cout << "FALSE" << endl;

    // printNodes(head2, tail2);

    return 0;
}