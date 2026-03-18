#include<iostream>
using namespace std;
int main(){
    int M , N;
    cin >> M >>N;
    int arr[M][N];

    // input
    for(int i = 0 ; i < M ; i++){
        for(int j = 0 ; j < N ; j++){
            cin >> arr[i][j];
        }
    }
    int top = 0 , bottom = M-1;
    int left = 0 , right = N-1;

    // left to right
    while(top<=bottom && left<=right){
        for(int j = left ; j<=right ; j++){
            cout << arr[left][j]<<", ";
        }
        top++;
        // right to left
        for(int j = right ; j >=left ; j--){
            cout<<arr[top][j]<<", ";
        }
        top++;
        // left to right
        for(int j = left ; j <=right ; j++){
            cout<<arr[top][j]<<", ";
        }
        top++;
        // right to left
        for(int j = right ; j >= left ; j--){
            cout << arr[top][j]<<", ";
        }
        top++;
        cout <<"END";
    }
return 0;
}