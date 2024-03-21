#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc-- > 0)
    {
        int n;
        cin >> n;
        set<int> newSet;
        while (n-- > 0)
        {
            int num;
            cin >> num;
            newSet.insert(num);
        }

        for (auto val : newSet)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}