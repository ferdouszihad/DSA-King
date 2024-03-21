#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
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