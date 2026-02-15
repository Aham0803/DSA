// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the LCM of N1 and N2. Print the value returned.

// The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    int k = max(a, b);

    while (true)
    {
        if (k % a == 0 && k % b == 0)
        {
            cout <<k;
            break;
        }
        k += max(a, b);
    }

    return 0;
}