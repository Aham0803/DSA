// Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int pos = 1;
//     int oddSum = 0;
//     int evenSum = 0;

//     while (N > 0)
//     {
//         int k = N % 10;
//         if (pos % 2 == 0)
//         {
//             evenSum = evenSum + k;
//         }
//         else
//         {
//             oddSum += k;
//         }
//         N = N/10;
//         pos++;
//     }

//     cout << oddSum << endl;

//     cout << evenSum;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int pos = 0;
    int oddSum = 0;
    int evenSum = 0;

    while (n != 0)
    {
        int k = n % 10;
        
        if (pos % 2 == 0)
        {
            evenSum += k;
        }
        else
        {
            oddSum += k;
        }
        n = n/10;
        pos++;
    }
    cout << "oddsum is " << oddSum << endl;
    cout << "evensum is " << evenSum << endl;

    return 0;
}