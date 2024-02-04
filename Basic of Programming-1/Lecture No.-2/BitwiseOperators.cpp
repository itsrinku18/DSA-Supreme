#include<iostream>
using namespace std;

int main(){
    int a=12,b=25;

    // // Bitwise And(&) operator
    // cout<<"a = "<<a<<endl;  // 12 in Binary 00001100
    // cout<<"b = "<<b<<endl;  // 25 in Binary 00011001
    // cout<<"a & b is :"<<(a&b)<<endl;  //   00001000    is 8   

    //  // Bitwise OR(|) operator
    // cout<<"a = "<<a<<endl;  // 12 in Binary 00001100
    // cout<<"b = "<<b<<endl;  // 25 in Binary 00011001
    // cout<<"a & b is :"<<(a|b)<<endl;  //    00011101    is 29

    //  // Bitwise XOR(^) operator
    // cout<<"a = "<<a<<endl;  // 12 in Binary 00001100
    // cout<<"b = "<<b<<endl;  // 25 in Binary 00011001
    // cout<<"a & b is :"<<(a^b)<<endl;  //    00010101    is 21 

    //  //  Bitwise Complement(~) operator
    //  cout<<"~("<<a<<")="<<(~a)<<endl;
    //  cout<<"~("<<b<<")="<<(~b)<<endl;

    //  // Shift Operator
    //  // right shift Operator
    //  int c=212;
    //  cout<<"Right Shift at 1 bit:"<<(c>>1)<<endl;
    //  cout<<"Right Shift at 2 bit:"<<(c>>2)<<endl;
    //  cout<<"Right Shift at 3 bit:"<<(c>>3)<<endl;
    //  cout<<"Right Shift at 4 bit:"<<(c>>4)<<endl;
     
     int d=-27;
     cout<<(d>>1);


    //  // left shift Operator
    //  cout<<"Left Shift at 1 bit:"<<(c<<1)<<endl;
    //  cout<<"Left Shift at 2 bit:"<<(c<<2)<<endl;
    //  cout<<"Left Shift at 3 bit:"<<(c<<3)<<endl;
    //  cout<<"Left Shift at 4 bit:"<<(c<<4)<<endl;

    int e=-24;
    cout<<(e<<1);


}