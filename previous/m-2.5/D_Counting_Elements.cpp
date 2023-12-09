#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (*it == v[i] + 1)
        {
            c++;
        }
        // cout << v[i];
    }

    cout << c << endl;

    return 0;
}