#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
     if(x < 0 || (x % 10 == 0 && x != 0)){
            cout << "false";
        }
        int rev = 0;
        while( x > rev){
           rev = rev * 10 + x % 10;
           x = x /10;
        }
        if (rev == x || x == rev / 10){
            cout <<"True";
        }
return 0;
}