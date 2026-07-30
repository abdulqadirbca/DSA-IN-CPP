#include <iostream>
using namespace std;
int main()
{
    int a[5], sum = 0;
    int n = sizeof(a) / sizeof(a[0]);
    cout << "enter element of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "sum of array = " << sum;
}
