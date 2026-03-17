#include<iostream>
using namespace std;
int main(){
    int arr[2][2] ={ 1 , 9 , 3 , 4};
    int max = INT16_MIN;
    for(int i  = 0 ; i < 2 ; i ++){
        for(int j = 0 ; j < 2 ; j++){
          if(max < arr[i][j]){
             max = arr[i][j];
          }
        }
    }
    cout << max;
return 0;
}