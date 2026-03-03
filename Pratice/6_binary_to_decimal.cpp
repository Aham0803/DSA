#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int k = n % 10;
        ans += k * pow(2, i);
        i++;
        n = n / 10;
    }
    cout << ans;
    return 0;
}