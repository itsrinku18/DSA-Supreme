#include<iostream>
#include<vector>
using namespace std;

int main(){
   vector<int> arr{10,20,30,40,50,60,70};
   int sum=80;

   // print all pairs
   // for outer loop will traverse for each element
   for(int i=0;i<arr.size();i++){
    // cout<<"We are at element "<<arr[i]<<endl;
    int element=arr[i];
    
    // for every element, will traverse on aage wala element
     for(int j=i+1;j<arr.size();j++){
        // cout<<"pair "<<element<<" with "<<arr[j]<<endl;
        // cout<<"{"<<element<<","<<arr[j]<<"}"<<endl;
       int element2=arr[j];
       for(int k=j+1;k<arr.size();k++){
        if(element + arr[j]+arr[k]==sum){
            cout<<"{"<<element<<","<<arr[j]<<","<<arr[k]<<"}"<<endl;
        }
     }
   }
   }

    return 0;
}
