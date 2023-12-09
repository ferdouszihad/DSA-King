#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;
    // vector<int> v(3);
    // vector<int> v(3, 105);
    // int a[5] = {12, 21, 13, 422, 15};
    // vector<int> v2(a, a + 3);
    vector<int> v;

    v.push_back(10);
    v.push_back(10);

    for (int num : v)
        cout
            << num << " ";
    cout << endl;
    cout << v.size() << " " << v.capacity() << " " << v.max_size() << " " << endl;

    v.resize(4, 1);
    for (int num : v)
        cout << num << " ";
    cout << endl;
    cout << v.size() << " " << v.capacity() << " " << v.max_size() << " " << endl;

    return 0;
}