#include<iostream>
using namespace std;
void reverse( int n, int arr[]){
    for(int i = n-1 ; i >= 0; i--){
       cout << arr[i]<<endl;
    }
}
int main(){ 
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
  reverse(n , arr);
return 0;
}