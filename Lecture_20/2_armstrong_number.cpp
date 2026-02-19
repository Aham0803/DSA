// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int og = n;

//     int temp = n;
//     int sum = 0;

//     // digit calculate karna

//     int l = 0;
//     while (temp != 0)
//     {
//         temp = temp / 10;
//         l++;
//     }
//     // power nikalna and add krna

//     while (n != 0)
//     {
//         int k = n % 10;
//         sum = sum + pow(k, 1);
//         n = n / 10;
//     }
//     // compare krna

//     if (og == sum)
//     {
//         cout << "Armstrong" << endl;
//     }
//     else
//     {
//         cout << "Not Armstrong" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int og = n;
    int temp = n;

    int len = 0;
    int sum = 0;

    while (temp != 0)
    {
        temp = temp / 10;
        len++;
    }

    while (n != 0)
    {
        int k = n % 10;
        sum = sum + pow(k, len);
        n = n/10;
    }

    if (sum == og)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not armstrong";
    }
    return 0;
}