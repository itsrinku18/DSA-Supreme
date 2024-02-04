#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



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
    else if(target > arr[mid] ) {
      //right search
      s = mid + 1;
    }
    // update to mid
    mid = s + (e-s)/2;
  }
  return ans;
}

// lastOccurence of element
int lastOccurence(vector<int> v,int target){
    int s=0;
    int e=v.size()-1;
    int mid=s + (e-s) / 2;
    int ans=-1;
    while(s<=e){
        if(v[mid] == target){
            // ans store
            ans=mid;
            // right search
            s=mid+1;
        }
        else if(target < v[mid]){
            //left part me search
            e=mid - 1;
        }
        else if(target > v[mid]){
            //right part me search
            s=mid + 1;
        }
        //update to mid
        mid=s + (e-s) / 2;
    }
    return ans;
}

int main(){
    
    vector<int> v{1,3,3,3,3,3,3,4,4,4,4,6,7};
    int target1 = 3;

    int firstIndex = firstOcc(v, target1);
    cout << "First Occurence of Element at Index: "<< firstIndex << endl;

    int lastIndex = lastOccurence(v, target1);
    cout << "Last Occurence of Element at Index: "<< lastIndex << endl;

    int totalNumberOfOccurence=(lastIndex-firstIndex)+1;

    cout<<"Total Number of Occruence of Element:"<<totalNumberOfOccurence<<endl;



  

    return 0;

}
