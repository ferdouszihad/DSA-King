#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    while (q > 0)
    {
        int num;
        cin >> num;

        int sloc = 0, mloc = n, flag = 0, mid = 0;
        while (sloc <= mloc)
        {
            mid = (sloc + mloc) / 2;
            if (v[mid] == num)
            {
                flag = 1;
                break;
            }
            else if (v[mid] < num)
            {
                sloc = mid + 1;
            }
            else
            {
                mloc = mid - 1;
            }
        }
        flag == 1 ? cout << "found" << endl : cout << "not found" << endl;

        q--;
    }

    return 0;
}