// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cin >> m;
//     int n = (m + 3) / 2;
//     // upper
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int z = m * 2;
    int n = (z + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
                if (i != 1)
        {
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << " ";
            }
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        if (i != 1)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // cout << "* ";
        if (i != 1)
        {
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << " ";
            }
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        if (i != 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}