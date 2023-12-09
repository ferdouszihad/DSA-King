#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> feq(26, 0);

    for (int i = 0; i < s.size(); i++)
    {
        feq[int(s.at(i)) - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (feq[i] != 0)
            cout << char(i + 97) << " : " << feq[i] << endl;
    }
    return 0;
}