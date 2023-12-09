#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];
    }
    int m;
    cin >> m;
    int elements[m];

    for (int i = 0; i < m; i++)
    {

        cin >> elements[i];
    }

    int position;
    cin >> position;

    v.insert(v.begin() + position, elements, elements + m);

    for (int num : v)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}