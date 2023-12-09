#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, flag = 1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            // cout << a[i] << " " << a[i + 1] << endl;
            if (a[i] > a[i + 1])
            {
                flag = 0;
                break;
            }
        }

        flag == 1 ? cout << "YES" << endl : cout << "NO" << endl;

        t--;
    }
    return 0;
}