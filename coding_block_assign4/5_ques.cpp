// Take an input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

// 1.It reads a number N.

// 2.Take Another N numbers as input and store them in an Array.

// 3.calculate the max value in the array and return that value.

// Sample Input
// 4
// 2
// 8
// 6
// 4
// Sample Output
// 8

#include<iostream>
using namespace std;
int maxValue(int n , int arr[]){
   int max = INT16_MIN;
   for(int i = 0 ; i < n ; i++){
    if(arr[i] > max){
        max = arr[i];
        }
   }
   return max;
}
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

   cout << maxValue(n , arr);
return 0;
}