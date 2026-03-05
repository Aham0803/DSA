// Take as input N, the size of an array. Take N more inputs and store that in an array. Take another number’s input as M. Write a function which returns the index on which M is found in an array, in case M is not found -1 is returned. Print the value returned.

// Sample Input
// 5
// 2
// 4
// 6
// 9
// 17
// 17
// Sample Output
// 4

#include <iostream>
using namespace std;

int find(int n , int target , int arr[])
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << find(n , target , arr);

    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] == target){
    //         cout << i;
    //     }
    // }
    return 0;
}