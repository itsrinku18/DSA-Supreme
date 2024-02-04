#include<iostream>
#include <cstring> 
#include <bits/stdc++.h> 
using namespace std;

int main(){
    int arr[]={1,3,5,7,9};
    for(int i=0;i<5;i++){
        arr[i]=1;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    // MemSet function
    memset(arr,5,sizeof(arr)); // arrayName,setValueAllIndexSame,sizeOfArray
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    char str[]={"RinkuKumar"};
    memset(str,'s',sizeof(str));
    cout<<str;


     bool prime[5]; 
    memset(prime, true, sizeof(prime)); 
    // If you print without using boolalpha it will print 
    // like this 
    for (int i = 0; i < 5; i++) 
        cout << prime[i] << " "; 
    cout << "\n"; 
    // If you use boolalpha it will print like this 
    for (int i = 0; i < 5; i++) 
        cout << boolalpha << prime[i] << " "; 


    return 0;
}