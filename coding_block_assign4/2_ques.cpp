#include <iostream>
#include <algorithm>
using namespace std;
int triplets(int N, int arr[], int target)
{
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == target)
                {
                    cout << arr[i] << ", ";
                    cout << arr[j] << " ";
                    cout << "and " << arr[k] << endl;}}}  }
    return 0;}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i]; }
    sort(arr , arr+N);
    int target;
    cin >> target;
    triplets(N, arr, target);
    return 0;}

