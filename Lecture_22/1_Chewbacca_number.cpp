// // // Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

// // // Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

// // // Input Format
// // // The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

// // // Output Format
// // // Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

// // // Sample Input
// // // 4545

// // // Sample Output
// // // 4444

// // #include<iostream>
// // using namespace std;
// // int main(){

// // return 0;
// // }

// #include <iostream>
// using namespace std;

// int extract()
// {
//     int x;
//     cin >> x;
//     int rev = 0;
//     while (x != 0)
//     {
//         int t = x % 10;
//         int ans = 9 - t;
//         if (ans < t)
//         {
//             rev = rev * 10 + ans;
//         }
//         else
//         {
//             rev = rev * 10 + t;
//         }

//         x = x / 10;
//        cout << rev;
//     }
//     return 0;
// }
// int main()
// {
//     extract();
//     return 0;
// }

#include <iostream>
using namespace std;
int len(int n)
{
    int ans = 0;
    while (n != 0)
    {
        n = n / 10;
        ans++;
    }
    return ans;
}
int reve(int n)
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
    int l = len(n);
    int rev = 1;
    while (n != 0)
    {
        int k = n % 10;
        int inv = 9 - k;
        if (l == 1 and inv == 0)
        {
            rev = rev * 10 + k;
            l--;
        }
        else if (inv < k)
        {
            rev = rev * 10 + inv;
            l--;
        }
        else
        {
            rev = rev * 10 + k;
            l--;
        }
        n = n / 10;
    }
    cout << reve(rev) / 10 << endl;
    return 0;
}