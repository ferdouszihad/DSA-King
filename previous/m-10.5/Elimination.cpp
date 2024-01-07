#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    while (n > 0)
    {
        int l, r, c = 0;
        cin >> l >> r;

        l -= 1;
        r -= 1;

        string s1 = s.substr(l, r - l + 1);
        int in = s1.find("01");
        while (s1.find("01") != -1)
        {
            s1.replace(s1.find("01"), 2, "");
            c += 2;
        }

        cout << c << endl;

        n--;
    }
    return 0;
}

// while
//     s.find("001", 2);
// s.replace(s.begin(), s.end(), "01", "1");
// cout << s << endl;
// for (int i = l; i <= r; i++)
// {
//     if (l > s.size() || r > s.size())
//     {
//         break;
//     }
//     if (s.at(i) == '1' && s.at(i - 1) == '0')
//     {
//         if (i != l)
//         {
//             c += 2;
//         }
//     }
// }
// cout << c << endl;
