#include<iostream>
#include<vector>
using namespace std;

int findMissingElement(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        // check if the missing element is on the left or right side of mid.
        if(arr[mid] != mid + arr[0]){
            // missing element on left side
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    // the missing element is at index start
    return s + arr[0];

}

int main(){
    vector<int> arr{1,2,3,4,6,7,8,9,10};

    int missingElement =findMissingElement(arr);

    cout<<"The missing element is: "<<missingElement<<endl;
  

    return 0;
}

