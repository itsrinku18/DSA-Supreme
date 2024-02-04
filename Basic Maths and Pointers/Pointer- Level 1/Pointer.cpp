#include<iostream>
using namespace std;

int main(){

// int a=5;
// int *p=&a;

// cout<<sizeof(p)<<endl;    

// char b='c';
// char *c=&b;

// cout<<sizeof(c)<<endl; 


// double d=5.09;
// double *dtr =&d;

// cout<<sizeof(dtr)<<endl;

// // bad practise
// int *ptr;
// cout<<*ptr<<endl;

// // null pointer
// int* ptr1=0;
// cout<<*ptr1<<endl;

// int e=10;

// int *ptr2=&e;

// int *ptr3=ptr2;

// cout<<*ptr2*2;
// cout<<*ptr2*2;

int a=10;
int *p=&a;
int *q=p;
int *r=q;

cout<<a<<endl;  // output is 10
cout<<&a<<endl; // output address
cout<<p<<endl;  // value of addres
cout<<&p<<endl; //
cout<<q<<endl;
cout<<&q<<endl;
cout<<*q<<endl;
cout<<r<<endl;
cout<<&r<<endl;
cout<<*r<<endl;
cout<<(*p+*q+*r)<<endl;
cout<<(*p)*2+(*r)*3<<endl;
cout<<(*p/2)-(*q/2)<<endl;


}