#include <bits/stdc++.h>
using namespace std;
class Allrounder
{
public:
    string name;
    int run;
    int wicket;

    Allrounder(string name, int run, int wicket)
    {
        this->name = name;
        this->run = run;
        this->wicket = wicket;
    }
};

class Best
{
public:
    bool operator()(Allrounder a, Allrounder b)
    {

        if (a.run > b.run)
        {
            return false;
        }
        else if (a.run < b.run)
        {
            return true;
        }
        else
        {
            if (a.wicket >= b.wicket)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }
};
int main()
{
    priority_queue<Allrounder, vector<Allrounder>, Best> players;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int wicket;
        int run;

        cin >> name >> run >> wicket;

        Allrounder player(name, run, wicket);
        players.push(player);
    }
    while (!players.empty())
    {
        cout << players.top().name << " ";
        cout << players.top().wicket << " ";
        cout << players.top().run << " \n";
        players.pop();
    }

    return 0;
}