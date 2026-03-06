#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int m;
        cin >> m;

        for(int j = 0 ; j < n ; j++){
            for(int k = j+1 ; k < n ; k++){
                if(arr[j]+arr[k] == m){
                    cout << arr[j] <<" " <<arr[k]<<endl;
                    cout << endl;
                }
            }
        }
    }
    return 0;
}