#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> li;
    int q;
    cin >> q;
    while (q > 0)
    {

        int opt, val;
        cin >> opt >> val;

        if (opt == 0)
        {
            li.push_front(val);
        }
        if (opt == 1)
        {
            li.push_back(val);
        }
        if (opt == 2)
        {
            if (val >= li.size())
            {
            }
            else
            {
                li.erase(next(li.begin(), val));
            }
        }

        cout << "L -> ";
        for (auto num : li)
        {
            cout << num << " ";
        }
        cout << endl;
        cout << "R -> ";

        li.reverse();
        for (auto num : li)
        {
            cout << num << " ";
        }
        cout << endl;
        li.reverse();

        q--;
    }
    return 0;
}