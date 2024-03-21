#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        pq.push(n);
        cout << pq.top() << " ";
    }
    cout << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}