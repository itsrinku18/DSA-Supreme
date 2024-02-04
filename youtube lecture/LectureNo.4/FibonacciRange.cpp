#include<iostream>
using namespace std;

int main(){
    int n,firstTerm=0,secondTerm=1,nextTerm=0;
    cout<<"Enter a positive Number:"<<endl;
    cin>>n;

    // display the first two terms which is always 0 and 1
    cout<<"Fibonacci Series:"<<firstTerm<<", "<<secondTerm<<", ";

    nextTerm=firstTerm+secondTerm;

    while(nextTerm<=n){
        cout<<nextTerm<<", ";
        firstTerm=secondTerm;
        secondTerm=nextTerm;
        nextTerm=firstTerm+secondTerm;
    }
    return 0;
}