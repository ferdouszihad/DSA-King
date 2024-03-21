#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    while (n-- > 0)
    {
        string s, word;
        map<string, int> mp;

        pair<string, int> max = {"", 0};

        getline(cin, s);
        stringstream ss(s);
        while (ss >> word)
        {

            // cout << word << endl;
            mp[word]++;
            if (mp[word] > max.second)
            {
                max.first = word;
                max.second = mp[word];
            }
        }
        cout << max.first << " " << max.second << endl;
    }

    return 0;
}