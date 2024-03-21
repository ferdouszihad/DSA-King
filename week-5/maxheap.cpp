#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    while (true)
    {
        int num;
        cin >> num;
        if (num == -1)
            break;
        v.push_back(num);
        int currIndex = v.size() - 1;
        while (currIndex != 0)
        {
            int parIndex = (currIndex - 1) / 2;
            if (v[parIndex] < v[currIndex])
            {
                swap(v[parIndex], v[currIndex]);
            }
            currIndex = parIndex;
        }
    }

    v.front() = v[v.size() - 1];
    v.pop_back();

    int rootIndex = 0;

    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}