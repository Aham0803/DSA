#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    int n ;
    cin >> n;
    int x;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        nums.push_back(x);
    }

    vector<int> ans(n,1);
    // prefix
    for(int i = 1 ; i < n ; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;

    for(int i = n-2 ; i >= 0 ; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

   for(int i = 0 ; i < n ; i++){
    cout << ans[i]<<" ";
   }
return 0;
}