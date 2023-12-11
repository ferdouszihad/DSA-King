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

bool checkDuplicate(Node *head)
{
    vector<int> v(101, 0);
    Node *current = head;
    while (current != NULL)
    {
        v[current->value]++;
        current = current->next;
    }

    for (int num : v)
    {
        // cout << num << " ";
        if (num > 1)
            return true;
    }
    // cout << endl;

    return false;
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
    // cout << checkDuplicate(head) << endl;
    checkDuplicate(head) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}