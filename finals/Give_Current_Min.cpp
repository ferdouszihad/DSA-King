#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n-- > 0)
    {
        int num;
        cin >> num;
        pq.push(num);
    }
    int tc;
    cin >> tc;
    while (tc-- > 0)
    {
        int btn;
        cin >> btn;

        switch (btn)
        {
        case 0:
            int num;
            cin >> num;
            pq.push(num);
            cout << pq.top() << endl;

            break;
            ////////////////////////////////////////
        case 1:
            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                cout << pq.top() << endl;
            }

            break;
            ////////////////////////////////////////
        case 2:
            if (!pq.empty())
                pq.pop();

            if (pq.empty())
            {
                cout << "Empty\n";
            }
            else
            {

                cout << pq.top() << endl;
            }

            break;
            ////////////////////////////////////////
        default:
            break;
        }
    }

    return 0;
}