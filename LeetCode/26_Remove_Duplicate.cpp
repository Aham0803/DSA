#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    int k = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[k])
        {
            k++;
            nums[k] = nums[i];
        }
    }
    return k + 1;
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {

//         int unique=0;
//         for(int i=1; i<nums.size();i++){
//             if(nums[i]!=nums[unique]){
//                 unique++;
//                 nums[unique]=nums[i];
//             }
//         }
//         return unique+1;
//     }
// };