// #include <iostream>
// using namespace std;
// int main()
// {
//     // 1 1 2 3 5 8 13
//     int n;
//     cin >> n;

//     int n1 = 0;
//     int n2 = 1;
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 sum = n1 + n2;
//                 n2 = n1;
//                 n1 = sum;
//                 cout << sum;
//                 cout << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int prev = 0;
    int curr = 1;
    int next;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << prev << "\t";
            next = prev + curr;
            prev = curr;
            curr = next;
        }
        cout << endl;
    }
    return 0;
}