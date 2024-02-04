#include<iostream>
using namespace std;

 void printDigit(int n){
    // base case
    cout<<"Printing value of n:"<<n<<endl;
    if(n==0){
        return;
    }
    // ek case solve karunga
    // int digit=n%10;
    // cout<<digit<<" ";  // it gives the result reverse order

    // baaki recursion sambhal lega
    printDigit(n/10);

     // ek case solve karunga
    int digit=n%10;
    cout<<digit<<" ";  // it gives the result same order


 }


int main(){
    int n=0647; // 0647 -> it show error
    if(n==0){
        cout<<0<<endl;
    }

    printDigit(n);


    return 0;
}