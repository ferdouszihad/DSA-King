#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> counter;

    int n;
    cin >> n;
    while (n > 0)
    {
        int opt;
        cin >> opt;
        if (opt == 0)
        {
            string name;
            cin >> name;
            counter.push(name);
        }
        if (opt == 1)
        {
            if (counter.empty())
            {
                cout << "Invalid\n";
            }
            else
            {
                cout << counter.front() << endl;
                counter.pop();
            }
        }

        n--;
    }
    return 0;
}