#include<iostream>
using namespace std;

bool isPrime(int n){
    int i=2;
    for(i=2;i<n;i++){
        if(n % i==0){
            return false;
        }
    }
    return true;
    
}

int  main(){
    int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        bool ans=isPrime(i);
        if(ans){
            cout<<i<<" ";
        }
    }
    
   return 0;
   

}