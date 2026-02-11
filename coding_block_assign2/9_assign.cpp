// //    1           1
// //    1 2       2 1
// //    1 2 3   3 2 1
// //    1 2 3 4 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        // left

        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << j - i + 1 << "\t";
        }
        for (int j = 2 * i - 3; j >= 1; j--)
        {
            cout << "\t";
        }

        // if (i == n)
        // {
        //     for (int j = i - 1; j >= 1; j--)
        //     {

        //         cout << j << "\t";
        //     }
        // }
        // else
        // {
        //     for (int j = i; j >= 1; j--)
        //     {

        //         cout << j << "\t";
        //     }
        // }
        // right

        // for (int j = n - i - 1; j >= 1; j--)
        // {
        //     cout << " \t";
        // }
        // for (int j = i; j >= 1; j--)
        // {
        //     if (j == n)
        //     {
        //         for (int j = n; j <= n; j++)
        //         {
        //             cout << j - 1;
        //         }
        //     }
        //     else
        //     {
        //         cout << j << "\t";
        //     }

        //     // cout << j << "\t";
        // }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << "\t";
//         }
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "\t";
//         }
//         for (int j = 1; j <= n - i - 1; j++)
//         {
//             cout << "\t";
//         }
//         if (i == n)
//         {
//             for (int j = i - 1; j >= 1; j--)
//             {
//                 cout << j << "\t";
//             }
//         }
//         else
//         {
//             for (int j = i; j >= 1; j--)
//             {
//                 cout << j << "\t";
//             }
//         }

//         cout << endl;
//     }
//     return 0;
// }