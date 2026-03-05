#include <iostream>
#include <algorithm>
using namespace std;

void sum(int n, int target, int arr[])
{
     sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << " and ";
                cout << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;

 sum(n, target, arr);
    return 0;
}