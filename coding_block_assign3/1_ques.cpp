// Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int pos = 1;
    int oddSum = 0;
    int evenSum = 0;

    while (N > 0)
    {
        int k = N % 10;
        if (pos % 2 == 0)
        {
            evenSum = evenSum + k;
        }
        else
        {
            oddSum += k;
        }
        N = N/10;
        pos++;
    }

    cout << oddSum << endl;
    
    cout << evenSum;

    return 0;
}