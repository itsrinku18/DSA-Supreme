#include <iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int n){
  int binaryNo=0;
  int i=0;
  while(n>0){
    int bit=n % 2;
    // bit store to reverse  the bit 
    binaryNo=bit*pow(10,i++)+binaryNo;
    n=n/2;
  }
  return binaryNo;
}

int decimalToBinaryMethod2(int n){
    int binaryNo=0;
    int i=0;
    while(n>0){
        int bit= n & 1;
        // bit score
        binaryNo=bit*pow(10,i++)+binaryNo;
        n=n>>1;
    }
    return binaryNo;
}

int main() {
  int n;
  cin>>n;
  int ans=decimalToBinaryMethod1(n);
  cout<<ans<<endl;
  
  int ans1=decimalToBinaryMethod2(n);
  cout<<ans1<<endl;
}