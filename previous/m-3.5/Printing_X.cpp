#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // if (n == 1)
    //     cout << "X" << endl;

    int sp1 = 0, sp2 = n - 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= sp1; j++)
        {
            cout << " ";
        }

        if (i == n / 2)
        {

            cout << 'X';
        }
        else
        {
            if (i < n / 2)
            {
                cout << "\\";
            }
            else
            {
                cout << "/";
            }
        }

        for (int j = 1; j <= sp2; j++)
        {
            cout << " ";
        }
        if (i != n / 2)
        {

            if (i < n / 2)
            {
                cout << "/";
            }
            else
            {
                cout << "\\";
            }
        }

        cout << endl;
        if (i < n / 2)
        {
            sp1++;
            sp2 -= 2;
        }
        else
        {
            sp1--;
            sp2 += 2;
        }
    }
    return 0;
}