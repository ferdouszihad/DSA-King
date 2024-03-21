#include <bits/stdc++.h>
using namespace std;
void sortByHeapTheory(vector<int> &inp)
{
    vector<int> v;

    for (auto val : inp)
    {
        v.push_back(val);
        int currIndex = v.size() - 1;
        int parentIndex = (currIndex - 1) / 2;
        int brotherIndex = currIndex % 2 == 0 ? currIndex - 1 : currIndex + 1;
    }
}
int main()
{
    vector<int> v = {10, 30, 20, 40, 50, 60, 100};

    sortByHeapTheory(v);

    return 0;
}