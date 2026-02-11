// //  * * * * *
// //  * *   * *
// //  *       *
// //  * *   * *
// //  * * * * *

// upper

// #include <iostream>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int m = (N + 1) / 2;

//     for (int i = 1; i <= m; i++)
//     {
//         if(i == 1){
//             for (int j = 1; j <= m - i; j++)
//         {
//             cout << "* ";
//         }
//     }
//         else{
//             for (int j = 1; j <= m - i + 1; j++)
//         {
//             cout << "* ";
//         }
//         }

//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//             cout << "  ";
//         }
//         for (int j = 1; j <= m - i + 1; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// }
//     for (int i = m - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= m - i + 1; j++)
//         {
//             cout << "* ";
//         }
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << "  ";
//         }
//         for (int j = i - 1; j >= 1; j--)
//         {
//              cout << "  ";}
//         for (int j = 1; j <= m - i + 1; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// second code

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cin >> m;
//     int n = (m + 1) / 2;
//     for (int i = 1; i <= n; i++)
//     {
//         // outer star
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*\t";
//         }
//         cout << "*\t";
//         // inner space
//         for (int j = 1; j <= 2 * i - 3; j++)
//         {
//             cout << " \t";
//         }
//         // star
//         if (i == 1)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 cout << "*\t";
//             }
//         }
//         else
//         {
//             for (int j = 1; j <= n - i + 1; j++)
//             {
//                 cout << "*\t";
//             }
//         }

//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--)
//     {
//         // outer space
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "*\t";
//         }
//         cout << "*\t";
//         // inner space
//         for (int j = 1; j <= 2 * i - 3; j++)
//         {
//             cout << "\t";
//         }
//         // star
//         if (i == 1)
//         {
//             for (int j = 1; j <= n - i; j++)
//             {
//                 cout << "*\t";
//             }
//         }
//         else
//         {
//             for (int j = 1; j <= n - i + 1; j++)
//             {
//                 cout << "*\t";
//             }
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
    int n = (m + 1) / 2;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        
        if (i != 1)
        {
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << "  ";
            }
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "* ";
        }
        if (i != 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
       
        if (i != 1)
        {
            for (int j = 1; j <= 2 * i - 3; j++)
            {
                cout << "  ";
            }
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "* ";
        }
        if (i != 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}