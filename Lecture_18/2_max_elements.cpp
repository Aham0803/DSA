// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, -12, 13, 20, 81};
//     int ans = INT16_MIN;
//     int s = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < s; i++)
//     {
//         if (ans < arr[i])
//         {
//             ans = arr[i];
//         }
//     }
//     cout << ans;

//     return 0;
// }
//   find maximum number

#include <iostream>
#include <climits>
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

    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (ans < arr[i])
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;
    return 0;
}