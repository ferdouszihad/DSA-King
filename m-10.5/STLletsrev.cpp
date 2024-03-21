#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        l1.push_back(n);
    }
    l1.reverse();
    for (auto val : l1)
        cout << val << " ";
    cout << endl;

    return 0;
}