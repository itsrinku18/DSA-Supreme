class Solution {
public:

             int binarySearch(vector<int> nums,int start,int k){
             int end=nums.size()-1;
             while(start<=end){
                 int mid=start+(end-start)/2;
                 if(nums[mid]==k){
                     return mid;
                 }
                 else if(k >nums[mid]){
                     start =mid +1;
                 }
                 else{
                     end=mid-1;
                 }
             }
             return -1;
         }







    int findPairs(vector<int>& nums, int k) {
        // Approach 1.-> Using Two pointer.

        // first sort the array.
        // sort(nums.begin(),nums.end());
        // set<pair<int,int>> ans;
        // int i=0,j=1;
        // while(j< nums.size()){
        //     int diff=nums[j]-nums[i];
        //     if(diff == k){
        //       cout<<nums[i]<<" "<<nums[j]<<endl;
        //     ans.insert({nums[i],nums[j]});
        //     ++i,++j;  
        //     }
        //     else if(diff > k){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        //     if(i==j) j++;
        // }
        // return ans.size();



         // Approach 2.-> Using binary search.



         sort(nums.begin(),nums.end());
         set<pair<int,int>> ans;

         for(int i=0;i<nums.size();i++){
            //  a[i]  search -> a[i] + k[right subArray];
            if(binarySearch(nums,i+1,nums[i]+k) !=-1){
                ans.insert({nums[i],nums[i]+k});
            }
         }

          return ans.size();



        
    }
};