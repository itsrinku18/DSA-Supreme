#include<iostream>
using namespace std;

int main(){

// int a=5;
// int b=5;

// cout<<a<<endl;

// // print address of variable using '&' operator.
// cout<<&a<<endl;
// cout<<&b<<endl;

// ------------------------------------
// Pointer create--->

// int a=5;
// // pointer create
// int *ptr=&a;

// // access the value ptr is pointing to
// cout<<"Address of a is:"<<&a<<endl;
// cout<<"value stored at ptr is:"<<ptr<<endl;
// cout<<"value ptr is pointing to is:"<<*ptr<<endl;  

// cout<<&ptr<<endl;


//---------------------------------
// kabhi pointer ka size print karo gye to hamesa 8 ya architecture depend hoga.
// int a =5;
// int *p=&a;

// char ch='b';
// char* c=&ch;

// double d=1.03;
// double *dtr=&d;

// cout<<sizeof(p)<<endl; // 8,4
// cout<<sizeof(c)<<endl; // 8,4
// cout<<sizeof(dtr)<<endl; //8,4


//--------------------------------------


// bad practise
// int *ptr;
// cout<<*ptr<<endl;

//--------------------------------------

//  above pointer declaration is using null pointer 
// int* ptr1=0;
// cout<<*ptr1<<endl;

//--------------------------------------
// pointer value copy to another pointer
// int e=10;

// int *ptr2=&e;

// int *ptr3=ptr2;
 
// cout<<*ptr2*2;
// cout<<*ptr2*2;

//--------------------------------------

int a=10;
int *p=&a;
int *q=p;
int *r=q;

cout<<a<<endl;  // 10
cout<<&a<<endl; //  address of a
cout<<p<<endl;  // address of a
cout<<&p<<endl; // address of p
cout<<*p<<endl; // 10
cout<<q<<endl; // address of a
cout<<&q<<endl; // address of q
cout<<*q<<endl; // 10
cout<<r<<endl; // address of a
cout<<&r<<endl; // address of r
cout<<*r<<endl; //10
cout<<(*p+*q+*r)<<endl; //30
cout<<(*p)*2+(*r)*3<<endl; //50
cout<<(*p/2)-(*q/2)<<endl; //0


}