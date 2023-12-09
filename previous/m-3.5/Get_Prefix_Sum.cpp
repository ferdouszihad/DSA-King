#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> v(n), pre(n, 0);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
        if (i == 0)
        {

            pre[i] = v[i];
        }
        else
        {

            pre[i] = pre[i - 1] + v[i];
        }
    }

    for (int i = n - 1; i >= 0; i--)
        cout << pre[i] << " ";

    cout << endl;

    return 0;
}