// Take the following as input.
// A number
// A digit
// Write a function that returns the number of times digit is found in the number. Print the value returned.

#include <iostream>
using namespace std;
int digit()
{
    int n;
    cin >> n;
    int digit;
    cin >> digit;
    int count = 0;
    while (n != 0)
    {
        int k = n % 10;
        if (k == digit)
        {
            count++;
        }
        n = n/10;
    }
    cout << count;
    return 0;
}
int main()
{
digit();
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int digit;
//     cin >> digit;
//     int count = 0;

//     while (n > 0)
//     {
//         int k = n % 10;
//         if (k == digit)
//         {
//             count++;
//         }
//         n = n / 10;
//         cout << count;
//     }

//     return 0;
// }