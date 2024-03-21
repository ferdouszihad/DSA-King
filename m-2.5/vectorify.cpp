#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {
        11,
        2,
        3,
        34,
        4,
        5,
        6,
        77};

    vector<int>
        v2(a, a + 8);
    // v2 = v1;
    for (int num : v2)
        cout << num << " ";
    cout << endl;

    replace(v2.begin(), v2.end(), 11, 9);
    auto add = find(v2.begin(), v2.end(), 134);

    cout << *add << endl;
    for (int num : v2)
        cout << num << " ";
    cout << endl;

    return 0;
}