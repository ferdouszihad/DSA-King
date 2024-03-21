#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    list<int> l2;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l1.push_back(val);
    }
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        l2.push_back(val);
    }

    if (l1.size() != l2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    for (auto it = l1.begin(), jt = l2.begin(); it != l1.end(); it++, jt++)
    {
        if (*it != *jt)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}