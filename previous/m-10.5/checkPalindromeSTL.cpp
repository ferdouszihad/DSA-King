#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        li.push_back(val);
    }
    int c = 0;
    for (auto it = li.begin(), jt = --li.end(); c < li.size() / 2; it++, jt--)
    {
        if (*it != *jt)
        {
            cout << *it << "FALSE" << *jt << "\n";
            return 0;
        }

        c++;
    }
    cout << "True\n";
    return 0;
}