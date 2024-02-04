#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    
    // print  Counting 1 to n
     
    // while(i<=n){
    //     cout<<i<<endl;
    //     i=i+1;
    // }

    // print  Counting n to 1
    i=n;

    while(i>=1){
        cout<<i<<" ";
        i=i-1;
    } 

}