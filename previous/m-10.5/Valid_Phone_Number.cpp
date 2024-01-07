#include <bits/stdc++.h>
using namespace std;

bool checkNum(string s)
{
    if (s.size() != 14)
    {
        return false;
    }
    if (s.at(0) != '+')
    {
        return false;
    }
    if (s.at(1) != '8')
    {
        return false;
    }
    if (s.at(2) != '8')
    {
        return false;
    }
    if (s.at(3) != '0')
    {
        return false;
    }
    if (s.at(4) != '1')
    {
        return false;
    }
    if (s.at(5) == '1')
    {
        return false;
    }
    if (s.at(5) == '0')
    {
        return false;
    }

    for (int i = 6; i < s.size(); i++)
    {
        if (s.at(i) >= '0' && s.at(i) <= '9')
        {
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {

        string s;

        cin >> s;

        checkNum(s) ? cout << "YES" << endl : cout << "NO" << endl;

        t--;
    }
    return 0;
}