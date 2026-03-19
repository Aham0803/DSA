// by brute force 

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0;
//         for(int i = 0 ; i < height.size() ; i++){
//             for(int j = i+1 ; j < height.size() ; j++){
//                 int width = j-i;
//                 int hght = min(height[i] , height[j]); 
//                 int currwater = hght*width;
//                 maxWater = max(maxWater , currwater);
//             }
//         }
//         return maxWater;
//     }
// };

// more optimize by two pointer O(n)

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0;
//         int lp = 0 , rp = height.size()-1;
//         while(lp<rp){
//             int width = rp-lp;
//             int hght = min(height[lp] , height[rp]);
//             int currWater = hght*width;
//             maxWater = max(maxWater , currWater);

//             if(height[lp] < height[rp]){
//                 lp++;
//             }
//             else{
//                 rp--;
//             }
//         }
//         return maxWater;
//     }
// };