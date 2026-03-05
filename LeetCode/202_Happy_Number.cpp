// loop ko tbtk chalana jbtk condtion satisfy na ho sikha

// class Solution {
// public:
//     bool isHappy(int n) {
//         int sum = 0 ;
//         if(n == 1 or n == 7){
//             return true;
//         }
//         else if(n<10){
//     return false;
//         }
//         else{
//             while(n!= 0){
//                 int k = n%10;
//                 sum += k*k;
//                 n = n/10;
//             }
//         }
//         return isHappy(sum);
//     }
// };

#include <iostream>
using namespace std;
bool isHappy(int n)
{
    int sum = 0;
    if (n == 1 or n == 7)
    {
        return true;
    }
    else if (n < 10)
    {
        return false;
    }
    else
    {
        while (n != 0)
        {
            int k = n % 10;
            sum += k * k;
            n = n / 10;
        }
    }

    return isHappy(sum);
}
int main()
{

    int n;
    cin >> n;
    if (isHappy(n))
    {
        cout << "happy";
    }
    else
    {
        cout << "not";
    }
}