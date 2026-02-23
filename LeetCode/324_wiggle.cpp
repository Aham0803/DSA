#include<iostream>
#include<vector>
using namespace std;

 void wiggleSort(vector<int>& nums) {
        
        for(int i =  0; i <= sizeof(nums); i++){
            if(nums[i] > nums[i+1]){
                nums[i] = nums[i+1];
            }
        }
    }
int main(){
    
return 0;
}