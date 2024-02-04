#include<iostream>
#include<vector>
using namespace std;

int findPeakIndex(vector<int> arr){
     int s=0;
     int e=arr.size()-1;
     int mid=s + (e - s) / 2;

        while(s < e){
            if(arr[mid] < arr[mid+1]){
                //right search
                s=mid+1;
            }
            else{
                e=mid;
            }
          mid = s + (e - s) / 2; 
        }
        return s;
}

int main(){
    vector<int> arr{0,5,10,2};

    cout<<"PeakIndex Of this array:"<<findPeakIndex(arr)<<endl;



    return 0;
}