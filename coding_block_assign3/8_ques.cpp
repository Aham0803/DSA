// // Take the following as input.

// A number (N1)
// A number (N2)
// Write a function which returns the GCD of N1 and N2. Print the value returned.

#include<iostream>
using namespace std;

int GCD(){
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
int ans = 1 ;
    for(int i = 1 ; i <= min(N1,N2); i++){
        if(N1 % i == 0 and N2 % i == 0){
            ans = i;
        }
    }
    cout << ans;
    
    return 0;
}
int main(){
    GCD();
return 0;
}