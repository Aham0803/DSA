// by brute force method
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n  = 7;
    int arr[n] = {3 , -4 , 5 , 4 , -1 , 7 , -8};

    int maxSum = INT16_MIN;
    for(int i = 0 ; i <  n ; i++){
        int currSum = 0;
       for(int j = i  ; j < n ; j++){
          currSum += arr[j];
          maxSum = max( maxSum , currSum);
       }
    }
    cout << maxSum;
return 0;
} 