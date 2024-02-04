#include<iostream>
using namespace std;

int main(){
    int n,firstTerm=0,secondTerm=1,nextTerm=0;
    cout<<"Enter the number of terms:"<<endl;
    cin>>n;

    cout<<"Fibonacci Series :";

    for(int i=1;i<=n;i++){
        // Prints the first two terms.
        if(i==1){
            cout<<firstTerm<<", ";
            continue;
        }
        if(i==2){
            cout<<secondTerm<<", ";
            continue;
        }
        nextTerm=firstTerm+secondTerm;
        firstTerm=secondTerm;
        secondTerm=nextTerm;

        cout<<nextTerm<<", ";
    }
    return 0;
}