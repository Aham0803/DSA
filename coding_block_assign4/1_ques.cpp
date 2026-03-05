// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which inverses the array. Print the values of inverted array

// Input Format
// Enter a number N and take N more inputs

// Constraints
// None

// Output Format
// Display the values of the inverted array in a space separated manner

// Sample Input
// 5
// 0 2 4 1 3
// Sample Output
// 0 3 1 4 2
// Explanation
// Swap element with index

// for eg : element 4 at index 2 becomes element 2 at index 4

//  index or values ke sath khelna sikha

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int inv[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // value ko index bna diya 
    for (int i = 0; i < N; i++)
    {
        inv[arr[i]] = i;
    }

    for (int i = 0; i < N; i++)
    {
        cout << inv[i] << " ";
    }
    return 0;
}