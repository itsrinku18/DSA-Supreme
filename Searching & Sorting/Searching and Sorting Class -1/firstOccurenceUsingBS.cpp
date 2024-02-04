#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//using array
int firstOccurence(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
       if(arr[mid] == target){
        // ans store 
        ans=mid;
        // then left
        end=mid-1;
       }
       else if(target < arr[mid]){
        //left me search
        end=mid-1;
       }
       else if(target > arr[mid]){
        //right me search
        start=mid+1;
       }

      mid=start+(end-start)/2;

    }
    return ans;

}

// using vector
int firstOcc(vector<int> arr, int target) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;
  int ans = -1;

  while(s <= e) {
    if(arr[mid] == target) {
      //ans store
      ans = mid;
      //left search
      e = mid - 1;
    }
    else if(target < arr[mid] ) {
      //left me search
      e = mid - 1;
    }
    // else { -> else if it is working.
    else if(target > arr[mid] ) {
      //right search
      s = mid + 1;
    }
    // update to mid
    mid = s + (e-s)/2;
  }
  return ans;
}

int main(){
    
    vector<int> v{1,3,3,3,3,3,3,4,4,4,4,6,7};
    int target1 = 4;

    int ans = firstOcc(v, target1);
    cout << "ans is. "<< ans << endl;

    // using stl inbuild function
    auto ans2 = lower_bound (v.begin(), v.end(), target1);
    cout << "ans2 is " << ans2-v.begin() << endl;

    int arr[]={1,3,7,8,0,4,4,6,7,9};
    int size=10;
    int target=4;

    int firstOccurenceAtIndex = firstOccurence(arr,size,target);

    if(firstOccurenceAtIndex == -1){
        cout<<"Target element  not found"<<endl;
    }
    else{
        cout<<"Target  Element First Occurence found index at : "<<firstOccurenceAtIndex<<endl;
    } 

    return 0;

}
