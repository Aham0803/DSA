// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
// Sample Input
// 5
// -4 -1 0 3 10
// Sample Output
// 0 1 9 16 100

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}