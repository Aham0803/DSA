// 378

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
    return sum;
}

bool isprime(int n)
{
    for (int i = 2; i < n - 1; i++)
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
    int o = n;
    int temp = n;
    int FactSum = 0;

    for (int i = 2; i < o; i++)
    {
        while (n % i == 0)
        {
            if (isprime(i))
            {
                FactSum += digitSum(i);
            }
            n = n/i;
        }
    }

    if (FactSum == digitSum(n))
    {
        cout << "number is boston";
    }
    else
    {
        cout << "not boston";
    }
    return 0;
}