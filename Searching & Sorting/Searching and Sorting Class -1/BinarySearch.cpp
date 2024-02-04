#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int  binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    
    // integer overlofw issues
    // int mid=(start+end)/2;

    int mid=start+(end-start)/2;

    while (start<=end)
    {
      int element=arr[mid];

        if(element==key){
            return mid;
        }
        else if(key < element){
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


int main(){
    int arr[]={2,4,6,8,10,12,16};
    int size=7;
    int key=18;

    int indexOfTarget = binarySearch(arr,size,key);

    if(indexOfTarget == -1){
        cout<<"Target element not found"<<endl;
    }
    else{
        cout<<"Target found index at : "<<indexOfTarget<<endl;
    } 

    // Binary search Implemented using STL Library
   
//    vector<int> v{1,2,3,4,5,6};

//    int arr[]={1,2,3,4,5,6,7,8};
//    int size=9;

//    // binary serach using array
//    if(binary_search(arr,arr+size,4)){
//     cout<<"Found"<<endl;
//    }
//     else{
//     cout<<"Not Found"<<endl;
//    }

//    cout<<"---------"<<endl; 

//    // binary serach using vector
//    if(binary_search(v.begin(),v.end(),5)){
//     cout<<"Found"<<endl;
//    }
//    else{
//     cout<<"Not Found"<<endl;
//    }


    return 0;
}