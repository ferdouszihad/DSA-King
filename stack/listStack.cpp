#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> li;

    void push(int val)
    {
        li.push_back(val);
    }

    void pop()
    {
        li.pop_back();
    }

    int top()
    {
        return li.back();
    }
    int size()
    {
        return li.size();
    }

    bool empty()
    {
        return li.empty();
    }
};
int main()
{
    myStack st;

    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;

        st.push(n);

        t--;
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}