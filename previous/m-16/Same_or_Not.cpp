#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2, c;
    cin >> n1 >> n2;

    stack<int> st;
    queue<int> q;
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
}