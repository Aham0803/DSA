#include <iostream>
using namespace std;
int gcdOfOddEvenSums()
{
    int n;
    cin >> n;
    int OddSum = 0;
    int EvenSum = 0;
    int ans = 1;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 2 != 0)
        {
            OddSum += i;
        }
        else
        {
              EvenSum += i;
        }
    }
    for (int i = 0; i <= min(OddSum, EvenSum); i++)
    {
        if (OddSum % i == 0 and EvenSum % i == 0)
        {
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}

int main()
{
    gcdOfOddEvenSums();
    return 0;
}