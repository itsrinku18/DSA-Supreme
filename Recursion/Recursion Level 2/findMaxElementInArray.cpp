#include<iostream>
using namespace std;

void findMaxElement(int arr[],int n,int i,int& maxi){
    // base case
    if(i >=n){
        // array agar khatam hoga,poora traverse hogya
        // toh wapas aajao
        return;
    }

    // 1 case solve krna h
    // current element ko check karo for max
    if(arr[i]>maxi){
        maxi=arr[i];
    }

    //or

    // maxi=max(maxi,arr[i]);

    // baaki recursion sambhal lega
    findMaxElement(arr,n,i+1,maxi);


}

int main(){
    int arr[]={10,30,15,44,26,17};
    int n=6;
    int i=0;

    int maxi=INT32_MIN;

    findMaxElement(arr,n,i,maxi);

    cout<<"maximum number is:"<<maxi<<endl;


   

    return 0;
}