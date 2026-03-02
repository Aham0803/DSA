#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};

    for (int i = 0; i < nums.size(); i++)
    {

        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "Single number is: " << nums[i];
            break;
        }
    }

    return 0;
}