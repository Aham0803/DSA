// You are given an input array whose each element represents the height of a line towers. The width of every tower is 1. It starts raining. Water is filled between the gap of towers if possible. You need to find how much water filled between these given towers.

// Input Format
// The first line consists of number of test cases T. Each test case consists an integer N as number of towers and next line contains the N space separated integers.

// Output Format
// Print how much unit of water collected among towers for each test case.

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int left[n], right[n];

        left[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            left[i] = max(left[i - 1], arr[i]);
        }

        right[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(right[i + 1], arr[i]);
        }

        int water = 0;

        for (int i = 0; i < n; i++)
        {
            water += min(left[i], right[i]) - arr[i];
        }

        cout << water << endl;
    }
}