#include <bits/stdc++.h>
using namespace std;
class compare
{
public:
    bool operator()(pair<string, int> a, pair<string, int> b)
    {
        if (a.first > b.first)
        {
            return true;
        }
        else if (a.first < b.first)
        {
            return false;
        }
        else
        {

            if (a.second <= b.second)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
int main()
{
    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> pq;

    int n;
    cin >> n;
    while (n-- > 0)
    {
        string s;
        int num;
        cin >> s >> num;
        pq.push({s, num});
    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}