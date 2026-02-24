#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        result.insert(result.end(), nums1.begin(), nums1.end());
        result.insert(result.end(), nums2.begin(), nums2.end());
        sort(result.begin(), result.end());
        int n = result.size();

        if (n % 2 == 0)
        {
            int mid1 = (n / 2) - 1;
            int mid2 = n / 2;
            int median = (result[mid1] + result[mid2]) / 2;
            cout << median;
        }
        if (n % 2 != 0)
        {
            int mid = n / 2;
            int median = result[mid];
            cout << median;
        }
        return 0;
    }
int main(){
    findMedianSortedArrays();
return 0;
}
    