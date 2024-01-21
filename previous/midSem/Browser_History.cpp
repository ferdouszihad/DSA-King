#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val)
    {
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};

void insert(Node *&head, Node *&tail, string val)
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
string searchNode(Node *&current, Node *head, string val)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == val)
        {
            current = tmp;
            return tmp->val;
        }
        tmp = tmp->next;
    }
    return "Not Available";
}

string back(Node *&current)
{
    if (current->prev != NULL)
    {
        current = current->prev;
        return current->val;
    }
    else
    {
        return "Not Available";
    }
}
string front(Node *&current)
{
    if (current->next != NULL)
    {
        current = current->next;
        return current->val;
    }
    else
    {
        return "Not Available";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *current = NULL;
    while (1)
    {
        string val;
        cin >> val;
        if (val == "end")
            break;
        insert(head, tail, val);
    }
    int q;
    cin >> q;
    while (q > 0)
    {
        string opt, val;
        cin >> opt;
        if (opt == "visit")
        {
            cin >> val;
            cout << searchNode(current, head, val) << endl;
        }
        else
        {
            if (opt == "prev")
            {
                cout << back(current) << endl;
            }
            else if (opt == "next")
            {
                cout << front(current) << endl;
            }
        }

        q--;
    }

    return 0;
}