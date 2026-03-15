
#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> arr, int target)
{
    vector<int> ans;
    int n = arr.size();

    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = arr[i] + arr[j];
        if (pairSum > target)
        {
            j--;
        }
        else if(pairSum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << " , " << ans[1];
    return 0;
}