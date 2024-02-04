#include<iostream>
#include<math.h>
using namespace std;

int binaryToDecimalMethod1(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit=n % 10;
        decimal=decimal+bit*pow(2,i++);
        n=n/10;
    }
    return decimal;
}

int binaryToDecimalMethod2(int n){
    int decimal=0;
    int i=0;
    while(n){
        int bit=n & 1;
        decimal=decimal+bit*pow(2,i++);
        n=n/10;
    }
    return decimal;
}

int main(){

    int binaryNumber;
    cin>>binaryNumber;

    cout<<binaryToDecimalMethod1(binaryNumber)<<endl;
    cout<<binaryToDecimalMethod2(binaryNumber)<<endl;

    



    return 0;
}