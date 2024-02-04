#include<iostream>
using namespace std;

int main(){

    int arr[5]={12,45,67,78,90};

    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;  // all three output base address.
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;

    // cout<<*arr+1<<endl;
    // cout<<*(arr)+1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;

    // int *p=arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;

    // int i=0;
    // cout<<arr[i]<<endl;
    // cout<<i[arr]<<endl;
    // cout<<*(arr+i)<<endl;
    // cout<<*(i+arr)<<endl;

    // arr=arr+2;

    // int *p=arr;
    // cout<<p+2<<endl;

    // int arr1[4]={5,6,7,8};
    // int *r=arr;
    // int *s=arr+1;

    // cout<<arr1<<endl;
    // cout<<&arr1<<endl;
    // cout<<arr1[0]<<endl;
    // cout<<&arr1[0]<<endl;
    // cout<<r<<endl;
    // cout<<&r<<endl;
    // cout<<*r<<endl;
    // cout<<s<<endl;
    // cout<<&s<<endl;
    // cout<<*s<<endl;
    // cout<<*(r+1)<<endl;
    // cout<<*(r+2)<<endl;
    // cout<<*(s+3)<<endl;
    // cout<<*(s+4)<<endl;

    // cout<<arr+1<<endl;
    // cout<<arr+2<<endl;

    // cout<<sizeof(arr)<<endl;

    // cout<<sizeof(p)<<endl;

    // cout<<sizeof(*p)<<endl;

    // charcter Array
    // char ch[5]={'R','i','n','k','u'};
    // char *c =ch;

    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;

    // cout<<&c<<endl;
    // cout<<*c<<endl;  // cout<<*(c+0)<<endl;
    // cout<<c<<endl;

    // char name[10]="ShareBano";
    // char *cptr=&name[0];

    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*(name+3)<<endl;
    // cout<<cptr<<endl;
    // cout<<&cptr<<endl;
    // cout<<*cptr<<endl;
    // cout<<cptr+2<<endl;
    // cout<<*(cptr+3)<<endl;
    // cout<<cptr+8<<endl;


    char ch1='k';
    char * cptr=&ch1;
    cout<<cptr;

    char name[10]="Babbar";  // good practise
    cout<<name<<endl;

    char *c="Babbar";  // bad practise
    cout<<c<<endl;



    




}