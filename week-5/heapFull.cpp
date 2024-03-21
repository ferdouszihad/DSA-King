#include <bits/stdc++.h>
using namespace std;
vector<int> getAHeap()
{

    int n;
    cin >> n;
    vector<int> v;
    while (n > 0)
    {
        int num;
        cin >> num;
        v.push_back(num);
        int curr_Index = v.size() - 1;
        while (curr_Index > 0)
        {
            int parent_Index = (curr_Index - 1) / 2;
            if (v[parent_Index] < v[curr_Index])
            {
                swap(v[parent_Index], v[curr_Index]);
            }
            curr_Index = parent_Index;
        }

        n--;
    }
    return v;
}
void printHeap(vector<int> v)
{
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << "\n";
}
bool validIndex(vector<int> v, int index)
{
    return index < v.size();
}

void pop_Heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int curr_Index = 0;

    while (true)
    {
        int left = curr_Index * 2 + 1;
        int right = curr_Index * 2 + 2;

        if (validIndex(v, left) && validIndex(v, right))
        {
            // left right 2 ta e ase
            if (v[left] >= v[right])
            {
                if (v[left] >= v[curr_Index])
                {

                    swap(v[left], v[curr_Index]);
                    curr_Index = left;
                }
                else
                {
                    break;
                }
            }
            else if (v[left] < v[right])
            {
                if (v[right] >= v[curr_Index])
                {

                    swap(v[right], v[curr_Index]);
                    curr_Index = right;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        else if (validIndex(v, left))
        {
            if (v[left] >= v[curr_Index])
            {

                swap(v[left], v[curr_Index]);
                curr_Index = left;
            }
            else
            {
                break;
            }
        }
        else if (validIndex(v, right))
        {
            if (v[right] >= v[curr_Index])
            {

                swap(v[right], v[curr_Index]);
                curr_Index = right;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
int main()
{
    vector<int> v = getAHeap();
    int n;
    cin >> n;
    printHeap(v);
    while (n > 0)
    {
        pop_Heap(v);
        printHeap(v);

        n--;
    }

    return 0;
}