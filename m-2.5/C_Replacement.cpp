#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (auto it = v.begin(); it < v.end(); it++)
    {
        if (*it > 0)
        {
            *it = 1;
        }
        else if (*it < 0)
        {
            *it = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}