#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ListNode;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        ListNode.push_back(val);
    }
    ListNode.sort();
    ListNode.unique();

    for (auto n : ListNode)
    {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}