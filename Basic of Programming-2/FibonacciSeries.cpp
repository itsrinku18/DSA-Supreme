#include<iostream>
using namespace std;

int main(){
    int n,firstTerm=0,secondTerm=1,nextTerm=0;
    cout<<"Enter the number of term:"<<endl;
    cin>>n;

    cout<<"Print Fibonacci Series"<<endl;

    // using for loop
    // for(int i=1;i<=n;i++){
    //     if(i==1){
    //         cout<<firstTerm<<", ";
    //         continue;
    //     }
    //     if(i==2){
    //         cout<<secondTerm<<", ";
    //         continue;
    //     }
    //     nextTerm=firstTerm+secondTerm;
    //     firstTerm=secondTerm;
    //     secondTerm=nextTerm;
    //     cout<<nextTerm<<", ";
    // }

    // for certain range to print fibonacci series

    nextTerm=firstTerm+secondTerm;

    for(int i=1;nextTerm<=n;i++){
       cout<<nextTerm<<" ";
       firstTerm=secondTerm;
       secondTerm=nextTerm;
       nextTerm=firstTerm+secondTerm;
    }

    return 0;
}
