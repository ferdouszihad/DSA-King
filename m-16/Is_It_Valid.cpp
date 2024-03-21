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
                else if (c == '0' && st.top() == '1')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }

        st.empty() ? cout << "YES\n" : cout << "NO\n";

        q--;
    }
    return 0;
}