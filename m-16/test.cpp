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
    myQueue st;

    st.push(1);
    st.push(2);
    st.push(3);

    // st.push(3);
    cout << st.size() << endl;
    cout << st.front() << endl;

    return 0;
}