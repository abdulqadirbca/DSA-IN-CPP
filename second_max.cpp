#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / 4;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    int secondmx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mx)
        {
            secondmx = max(secondmx, arr[i]);
        }
    }
    if (secondmx == INT_MIN)
    {
        cout << "not found second number";
    }
    else
    {
        cout << "second max number \n"
             << secondmx;
    }
}
