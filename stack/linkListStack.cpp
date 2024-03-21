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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        cout << head->val << endl;
    }
    void pop()
    {
        if (head == NULL)
        {
            return;
        }

        Node *toDelete = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head == NULL;
        }
        delete toDelete;
        sz--;
    }
    int top()
    {
        if (head == NULL)
            return -1;

        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (tail == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    myStack st;

    st.pop();
    cout << st.top() << endl;

    return 0;
}