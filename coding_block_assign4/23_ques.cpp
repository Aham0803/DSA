// Given an array of size n, find the majority element. The majority element is the element that appears more than n/2 times.

// You may assume that the array is non-empty and the majority element always exist in the array.

// Sample Input
// 3
// 1 1 2
// Sample Output
// 1

#include <iostream>
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
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            cout << arr[i]<<" ";
            break;
        }
    }
    return 0;
}