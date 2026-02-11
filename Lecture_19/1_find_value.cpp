#include <iostream>
using namespace std;
// linear search

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            cout << x << " number is at index " << i+1 << endl;
        }
    }
    return 0;
}