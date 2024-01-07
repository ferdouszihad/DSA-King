#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;
    list<int> l2;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        l1.push_back(n);
    }
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        l2.push_back(n);
    }

    if (l1.size() != l2.size())
    {
        cout << "false" << endl;
    }
    else
    {

        for (auto it1 = l1.begin(), it2 = l2.begin(); it1 != l1.end(); it1++, it2++)
        {
            if (*it1 != *it2)
            {
                cout << "false" << endl;
                return 0;
            }
        }
        cout << "True" << endl;
    }
    return 0;
}