#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
int sizeOf(Node *head)
{
    int size = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        size++;
        curr = curr->next;
    }
    return size;
}

void printFull(Node *head, Node *tail)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << "\n~~~~~~~~~~~~~~~~~~~~~\n";
    curr = tail;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    }
    Node *front = head, *back = tail;
    int size = sizeOf(head);

    for (int i = 0; i < size / 2; i++)
    {
        if (front->val != back->val)
        {
            cout << "NO\n";
            return 0;
        }
        front = front->next;
        back = back->prev;
    }

    cout << "YES\n";
    return 0;
}