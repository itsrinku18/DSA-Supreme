#include<iostream>
#include<vector>
using namespace std;

int findOddOccurrenceElement(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s +(e-s)/2;

    while(s<=e){
        // single element case
        if(s==e){
            return s;
        }

        // 2 cases -> mid - even or mid - odd
        if(mid % 2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    }
    return -1;


}

int main(){
    // vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    //  vector<int> arr{-1,-1,2,2,3,3,4,4,5,5,6,6,7,7,1,1,2,2,3,3,100,100,5};
    vector<int> arr{1,1,2,2,1};

    int ans =findOddOccurrenceElement(arr);

    cout<<"Ans is at Index Number :"<<ans<<" Value is:"<<arr[ans]<<endl;

    return 0;

}