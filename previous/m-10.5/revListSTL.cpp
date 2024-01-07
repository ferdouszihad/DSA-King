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
    li.reverse();
    for (auto val : li)
    {
        cout << val << " ";
    }
    return 0;
}