#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution

{
public:
    int removeDuplicates(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return i;
            }
        }
        return 0;
    }
};