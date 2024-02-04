// Airthemtic Operator
#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int multipy(int a,int b){
    return a*b;
}

float divide(int a,int b){
    return a/b;
}

float mod(int a,int b){
    return a%b;
}

int main(){
int a,b,result;  // a=10


cout<<"Enter the value of a and b:"<<endl;
cin>>a>>b;

// cout<<add(a,b)<<" ";
// cout<<sub(a,b)<<" ";
// cout<<multipy(a,b)<<" ";
// cout<<divide(a,b)<<" ";
// cout<<mod(a,b)<<endl;

// // relation operator
// bool first=a==b;
// cout<<first<<endl;
// bool second=a>b;
// cout<<second<<endl;
// bool third=a<b;
// cout<<third<<endl;
// bool fourth=a>=b;
// cout<<fourth<<endl;
// bool fifth=a<=b;
// cout<<fifth<<endl;
// bool sixth=a!=b;
// cout<<sixth<<endl;


// // logical operator

// cout<<(a>0)&& (b!=0);
// cout<<(a>5)|| (b<10);
// cout<<(!a);

// increment operator
// cout<<a++<<endl;  //  print a=10 then increment a=11
// cout<<++a<<endl; // a=11 then first increment then ans is a=12

// decrement operstor
// cout<<b--<<endl;
// cout<<--b<<endl;

// a++;  // 13
// cout<<a<<endl; 
// ++a; // 14
// --a;  //13
// ++a;  //14
// cout<<a<<endl;
// a--;   //13 
// cout<<a<<endl;

// Ternary Operator
// result=(a>b) ? a:b;

// cout<< result<<endl;

// Left Shift Operator --> 2 ka multiple like 5 ans is 10
// a=a<<2;
// cout<<a<<endl;

// right Shift Operator --> 2 ka dicvisible value like 5 ans is 2
// b=b>>2;
// cout<<b<<endl;

// xor operator -->
int ans=a^b;
cout<<ans<<endl;

// bitwise And
cout<<"a & b ="<<(a&b)<<endl;

// bitwise Or
cout<<"a | b ="<<(a|b)<<endl;

// bitwise not
cout<<"~a ="<<(~a)<<endl;






return 0;

}