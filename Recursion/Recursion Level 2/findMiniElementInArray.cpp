#include<iostream>
using namespace std;

void findMiniElement(int arr[],int n,int i,int& mini){
    // base case
    if(i >=n){
        // array agar khatam hoga,poora traverse hogya
        // toh wapas aajao
        return;
    }

    // 1 case solve krna h
    // current element ko check karo for max
    if(arr[i]<mini){
        mini=arr[i];
    }
    
    // or
    // mini=min(mini,arr[i]);

    // baaki recursion sambhal lega
    findMiniElement(arr,n,i+1,mini);


}

int main(){
    int arr[]={10,30,15,44,26,17};
    int n=6;
    int i=0;

    int mini=INT32_MAX;

    findMiniElement(arr,n,i,mini);

    cout<<"minimum number is:"<<mini<<endl;


   

    return 0;
}