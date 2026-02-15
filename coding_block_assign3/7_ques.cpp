// Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = true;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n / i == 0)
        {
            ans = false;
            break;
        }
    }
    if (!ans)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "Prime";
    }

    return 0;
}