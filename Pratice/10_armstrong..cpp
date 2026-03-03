#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int original = n;
    int temp = n;
    int sum = 0;
    int l = 0;
    while (original != 0)
    {
        original = original / 10;
        l++;
    }

    while (n != 0)
    {
        int k = n % 10;
        sum += (int)pow(k, l);
        n = n / 10;
    }

    if (sum == temp)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int temp = n;
//     int original = n;
//     int sum = 0;
//     int l = 0;

//     // digit count
//     while (original != 0)
//     {
//         original /= 10;
//         l++;
//     }

//     original = n;

//     // armstrong calculation (without pow)
//     while (original != 0)
//     {
//         int k = original % 10;

//         int power = 1;
//         for (int i = 0; i < l; i++)
//         {
//             power *= k;
//         }

//         sum += power;
//         original /= 10;
//     }

//     if (sum == temp)
//         cout << "armstrong";
//     else
//         cout << "not armstrong";

//     return 0;
// }