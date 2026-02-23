// #include <iostream>
// using namespace std;
// int digitSum(int n)
// {
//     int sum = 0;
//     while (n != 0)
//     {
//         int k = n % 10;

//         sum += k;
//         n /= 10;
//     }
//     return sum;
// }
// bool prime(int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     int factor = 0;
//     sum = digitSum(n);
//     for (int i = 2; i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             if (prime(i))
//             {
//                 factor += digitSum(i);
//             }
//             n = n / i;
//         }
//     }
//     cout << sum << endl;
//     cout << factor << endl;
//     if (sum == factor)
//     {
//         cout << "Boston" << endl;
//     }
//     else
//     {
//         cout << "Not Boston" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int digitSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int k = n % 10;
        sum += k;
        n = n / 10;
    }
    return 0;
}

bool prime(int n)
{
    for (int i = 2; i <= n * n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int factor = 0;
    sum = digitSum(n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            if (prime(i))
            {
                factor += digitSum(i);
            }
            n = n / i;
        }
    }
    cout << sum<<endl;
    cout << factor;
    if (factor == sum)
    {
        cout << "boston" << endl;
    }
    else
    {
        cout << "not boston ";
    }

    return 0;
}
