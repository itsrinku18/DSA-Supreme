// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
        // using First Method -> STL sort alogritham
        // sort(nums.begin(),nums.end());

         // using Second Method -> Simple Counts zeros ones and twos and spread them
        // int zeros,ones,twos;
        // zeros=ones=twos=0;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         zeros++;
        //     }
        //     else if(nums[i]==1){
        //         ones++;
        //     }
        //     else{
        //      twos++;
        //     }
        // }

        // // spread 
        // int i=0;
        // while(zeros--){
        //     nums[i]=0;
        //     i++;
        // }
        // while(ones--){
        //     nums[i]=1;
        //     i++;
        // }
        // while(twos--){
        //     nums[i]=2;
        //     i++;
        // }

         // using Third Method -> Using 3-pointer Appraoch

//         int low=0,medium=0,high=nums.size()-1;

//         while(medium<=high){
//             if(nums[medium]==0){
//                 swap(nums[low],nums[medium]);
//                 low++,medium++;
//             }
//             else if(nums[medium]==1){
//                 medium++;
//             }
//             else{
//                 swap(nums[medium],nums[high]);
//                 high--;
//             }
//         }

        
//     }
// };