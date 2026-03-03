#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int ans = 0;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            ans = i;
        }
       
    }
      cout << ans;
   
    return 0;
}