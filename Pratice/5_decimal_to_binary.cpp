#include <iostream>
using namespace std;
int rev(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int k = n % 10;
        rev = rev * 10 + k;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    int ans = 1;
    while (n > 0)
    {
        int k = n % 2;
        ans = ans * 10 + k;
        n = n / 2;
    }

    cout << rev(ans) / 10;
    return 0;
}