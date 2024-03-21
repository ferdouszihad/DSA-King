#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int v[n], pf[n];
    // vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            pf[i] = v[i];
        else
            pf[i] = pf[i - 1] + v[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pf[i] << " ";
    // }
    // cout << endl;

    while (q > 0)
    {
        int st, en, sum = 0;
        cin >> st >> en;
        st = st - 1;
        en = en - 1;

        if (st == 0)
        {

            sum = pf[en];
        }
        else if (st > 0)
        {
            sum = pf[en] - pf[st - 1];
        }

        cout << sum << endl;

        q--;
    }
    return 0;
}