#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n;
    cin >> n;
    while (n > 0)
    {
        int val;
        cin >> val;
        st.push(val);

        n--;
    }
    cin >> n;
    while (n > 0)
    {
        int val;
        cin >> val;
        q.push(val);

        n--;
    }

    if (st.size() != q.size())
    {
        cout << "NO\n";
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO\n";
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES\n";

    return 0;
}