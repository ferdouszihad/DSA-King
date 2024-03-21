#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.mark < b.mark)
            return true;
        else if (a.mark > b.mark)
            return false;
        else
        {
            if (a.roll > b.roll)
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
    int n;
    priority_queue<Student, vector<Student>, cmp> maxData;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        string s;
        int r;
        int m;
        cin >> s >> r >> m;
        Student a(s, r, m);
        maxData.push(a);
    }
    int tc;
    cin >> tc;

    while (tc-- > 0)
    {
        int opt;
        cin >> opt;
        getchar();
        if (opt == 0)
        {
            string s;
            int r;
            int m;
            cin >> s >> r >> m;
            Student a(s, r, m);
            maxData.push(a);
            cout << maxData.top().name << " ";
            cout << maxData.top().roll << " ";
            cout << maxData.top().mark << "\n";
        }
        else if (opt == 1)
        {
            if (maxData.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                cout << maxData.top().name << " ";
                cout << maxData.top().roll << " ";
                cout << maxData.top().mark << "\n";
            }
        }
        else if (opt == 2)
        {
            if (!maxData.empty())
                maxData.pop();

            if (maxData.empty())
            {
                cout << "Empty\n";
            }
            else
            {
                cout << maxData.top().name << " ";
                cout << maxData.top().roll << " ";
                cout << maxData.top().mark << "\n";
            }
        }
    }

    return 0;
}