#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{13,3,48,3,32,45,2};

    // it using vector
    sort(arr.begin(),arr.end());

    // printing 
    cout<<"Sort vector using sort function"<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr1[]={13,3,48,3,32,45,2};
    int size =sizeof(arr)/sizeof(int);

    sort(arr1,arr1+size);
    cout<<"Sort array using sort function"<<endl;
     for(int i=0;i<arr.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;


    return 0;
}