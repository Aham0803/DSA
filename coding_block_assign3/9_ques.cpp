// Given a list of numbers, stop processing input after the cumulative sum of all the input becomes negative
// Print all the numbers before the cumulative sum become negative.
#include<iostream>
using namespace std;
int main(){
    int n;
    
int sum = 0;
    while(true){
        cin >> n;
      sum = sum + n;
      if(sum < 0){
        break;
      }
      sum = sum-n;
    }
    cout << sum;
return 0;
}