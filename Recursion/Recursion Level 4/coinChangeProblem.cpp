#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&arr,int target){
    // base case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT32_MAX;
    }

    // let's solve 1 case
    int mini=INT32_MAX;
    for(int i=0;i<arr.size();i++){
       int ans= solve(arr,target-arr[i]);
       if(ans !=INT32_MAX)
       mini=min(mini,ans+1);
    }

    return mini;


}

int main(){
    vector<int> arr{1,2,3};
    int target=5;

    int ans =solve(arr,target);

    cout<<"Ans is:"<<ans;


    return 0;
}