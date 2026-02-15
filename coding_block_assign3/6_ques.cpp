// Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the LCM of N1 and N2. Print the value returned.

// The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.

#include <iostream>
using namespace std;

int LCM()
{
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
int i = 1;
   while( i){

   if(N1%i == 0 && N2%i == 0)
        cout << i;
        i++;
    }

    return 0;
}
int main()
{
LCM();
    return 0;
}