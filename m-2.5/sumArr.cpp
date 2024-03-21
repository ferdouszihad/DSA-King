#include <bits/stdc++.h>
using namespace std;
int sum(int *a, int i, int n)
{

    if (i >= n)
        return 0;

    cout << a[i] << "+ sum(a," << n << "," << i + 1 << ")" << endl;
    return a[i] + sum(a, n, i + 1);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int res = sum(a, 0, n);
    cout << res;
    return 0;
}