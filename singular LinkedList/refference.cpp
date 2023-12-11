#include <bits/stdc++.h>
using namespace std;

void func(int *&ptr)
{
    cout << "in Func" << endl;
    cout << "value -ptr:\t" << ptr << endl;
    cout << "D-reference -ptr:\t" << *ptr << endl;
    cout << "location-ptr:\t" << &ptr << endl;
    cout << "---------------------" << endl;
}

int main()
{
    int n = 10;

    int *ptr = &n;

    cout << "value -n:\t" << n << endl;
    cout << "location-n:\t" << &n << endl;
    cout << "---------------------" << endl;
    func(ptr);
    cout << "value -ptr:\t" << ptr << endl;
    cout << "D-reference -ptr:\t" << *ptr << endl;
    cout << "location-ptr:\t" << &ptr << endl;
    cout << "---------------------" << endl;

    return 0;
}