// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int N1;
//     cin >> N1;
//     int N2;
//     cin >> N2;
//     int k;
//     int len = 1;

//     for (int n = 1; n <= INT_MAX; n++)
//     {
//         if (len <= N1)
//         {
//             k = 3 * n + 2;
//             if (k % N2 != 0)
//             {
//                 cout << k << endl;
//                 len++;
//             }
//         }
//     }

//     return 0;
// }

// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2

#include <iostream>
using namespace std;

int series()
{
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
    int n;
    int z = 3*n+2 % N2 != 0;
    if (z <= N1)
    {
        
        for (n = 1; n <= z; n++)
        {

            int k = 3 * n + 2;
            if (k % N2 != 0)
            {
                cout << k << endl;
            }
        }
    }

    return 0;
}
int main()
{
    series();
    return 0;
}