class Solution {
public:

   int  binarySearch(vector<int>arr,int target,int start,int end){
        
    // integer overlofw issues
    // int mid=(start+end)/2;

    int mid=start+(end-start)/2;

    while (start<=end)
    {
      int element=arr[mid];

        if(element==target){
            return mid;
        }
        else if(target < element){
            //search in left
            end=mid-1;
        }
        else{
            // serach in right
            start=mid+1;
        }
        // update to mid
        mid=start+(end-start)/2;
    }
    // element not found
    return -1;
    
}

   
   int findPivotElement(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(s==e){
            //single element
            return s;
        }

        // unsorted element handle case
        if(mid + 1 <= e && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid - 1 >=s && arr[mid-1] > arr[mid]){
            return mid-1;
        }
        if(arr[s] >= arr[mid]){
            // left search
            e=mid-1;
        }
       else{
            //right me serach
            s=mid +1;

        }
        mid = s + (e - s) / 2;
    }
    return s;
}

    int search(vector<int>& nums, int target) {
        int pivotIndex=findPivotElement(nums);

        if( target >= nums[0] && target <=nums[pivotIndex] ){
            // search in array A
            int ans =binarySearch(nums,target,0,pivotIndex);
            return ans;
        }
        if(pivotIndex+1 < nums.size() && target >= nums[pivotIndex+1] && target <=nums[nums.size()-1]){
              int ans =binarySearch(nums,target,pivotIndex+1,nums.size()-1);
            return ans;

        }
        return -1;

        
    }
};