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
class fzStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
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

    void pop()
    {
        Node *toDelete = tail;

        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete toDelete;
        sz--;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        if (sz == 0 && tail == NULL && head == NULL)
            return true;
        else
        {
            return false;
        }
    }
};
int main()
{
    fzStack s1, s2;
    int n;
    cin >> n;
    while (n > 0)
    {
        int val;
        cin >> val;
        s1.push(val);

        n--;
    }
    cin >> n;
    while (n > 0)
    {
        int val;
        cin >> val;
        s2.push(val);

        n--;
    }

    if (s1.size() != s2.size())
    {
        cout << "NO\n";
        return 0;
    }

    while (!s1.empty() && !s2.empty())
    {

        if (s1.top() != s2.top())
        {
            cout << "NO\n";
            return 0;
        }
        s1.pop();
        s2.pop();
    }
    cout << "YES\n";

    return 0;
}