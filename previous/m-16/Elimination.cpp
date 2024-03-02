#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q > 0)
    {

        string s;
        cin >> s;
        stack<char> st;

        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                if (c == '1' && st.top() == '0')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }

        if (st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        q--;
    }
    return 0;
}