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

#include<iostream>
using namespace std;
int main(){
    
    int x;
    cin >> x;
    int rev = 0;
    while(x != 0){
        int t = x%10;
        int check = 9-t;
        if(check < t){
            rev = rev*10+ check;
        }
        else{
           rev = rev*10+t;
        }
        x = x/10;
    }
    cout << rev;
return 0;
}