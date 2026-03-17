#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {10, 12, 3, 4, 5, 6, 1, 1, 1};
      int max = INT8_MIN;
      int index = -1;
    for(int i = 0 ; i < 3 ; i++){
        int sum = 0;
        for(int j = 0 ; j < 3 ; j++){
           sum += arr[i][j];
           if(max < sum){
               max = sum;
               index = i;
           }
        }
    }
cout << index;
    return 0;
}