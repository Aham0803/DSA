#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
 int val;
    cin >> val;
    for(int i =  0 ; i < n ; i++){
        if( val == arr[i]){
            cout << "the value is at index " << i;
        }

    }
return 0;
}