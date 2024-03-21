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
        if (head == NULL)
            return;
        sz--;
        Node *todlt = tail;
        tail = tail->prev;
        if (tail == NULL)
        {

            head = NULL;
        }
        else
        {

            tail->next = NULL;
        }
        delete todlt;
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
        return head == NULL;
    }
};
class myQueue
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
        if (head == NULL)
            return;
        sz--;
        Node *to_dlt = head;
        head = head->next;
        if (head == NULL)
        {
            tail == NULL;
        }
        else
        {

            head->prev = NULL;
        }
        delete to_dlt;
    }
    int size()
    {
        return sz;
    }
    int front()
    {

        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n1, n2, c;
    cin >> n1 >> n2;

    c = n1;
    while (c > 0)
    {
        int val;
        cin >> val;
        st.push(val);

        c--;
    }
    c = n2;
    while (c > 0)
    {
        int val;
        cin >> val;
        q.push(val);
        c--;
    }

    if (n1 != n2)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;

    return 0;

    return 0;
}