#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t > 0)
    {

        int sum = 0;
        char ch;
        while (true)
        {
            scanf("%c", &ch);
            if (ch == '\n')
            {
                break;
            }
            sum += int(ch) - 48;
            // cout << ch;
        }
        if (sum % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}
