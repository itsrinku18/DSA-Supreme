#include<iostream>
using namespace std;

void solve(int arr[]){
    cout<<"Size of arr inside solve function:"<<sizeof(arr)<<endl;
    cout<<"arr:"<<arr<<endl;
    // cout<<*arr<<endl;
    cout<<"&arr:"<<&arr<<endl;
    cout<<sizeof(arr);
    arr[0]=50;
}

void update(int* p){
    cout<<"Address stored inside p is:"<<p<<endl;
    cout<<"Address inside p is:"<<&p<<endl;

    *p=*p+10;

}


int main(){

    // Array used pointer
    int arr[]={12,44,16,18};

    // cout<<arr <<endl;
    // cout<<arr[0] <<endl;
    // cout<<&arr <<endl;
    // cout<<&arr[0]<<endl;

    // int* p=arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;

    // --------------------------
    // cout<<*arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr)+1<<endl;
    // cout<<arr[1]<<endl;
    // // it print next arr[1] element
    // cout<<*(arr+1)<<endl;
    // cout<<arr[1]<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*(arr+3)<<endl;
    // cout<<arr[3]<<endl;

    // --------------------------
    // both way is same arr[i] or i[arr] ya *(arr+i) ya *(i+arr).
    // it give same result. 
    // int i=0;
    // cout<<arr[i]<<endl;
    // cout<<i[arr]<<endl;
    // cout<<*(arr+i)<<endl;
    // cout<<*(i+arr)<<endl;

    // // arr=arr+2; // it show error

    // // it works with pointer arr=arr+2
    // int*p=arr;
    // p=p+2;

    // --------------------------
    // pointer vs array size diffrence
    // int arr1[10];
    // cout<<sizeof(arr)<<endl;

    // int *p=arr;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;

    // --------------------------
    // char array used pointer
    // char ch[10]="Rinku";

    // char * c=ch;
    // // char * c=&ch[0];
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;

    // cout<<&c<<endl;
    // // *c =*(c+0)-> c[o]->R.
    // cout<<*c<<endl;
    // cout<<c<<endl;
    
    // Question on char array using pointer
    // char name[9]="SherBano";
    // char* c=&name[0];

    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*(name+3)<<endl;
    // cout<<c<<endl;
    // cout<<&c<<endl;
    // cout<<*(c+3)<<endl;
    // cout<<c+2<<endl; // print tring with start 2 index
    // cout<<*c<<endl;
    // cout<<c+8<<endl; // null charcter

    //------------------------------

    // char ch='k';
    // char *cptr=&ch;

    // cout<<cptr<<endl;

    //------------------------------
    // char name[10]="rinku";
    // cout<<name<<endl;

    // // it is bad practise.
    // char*c="rinku";
    // cout<<c<<endl;

    //--------------Pointers with functions----------------
    
    // int arr2[10]={1,2,3,4};
    // cout<<"Size inside main function:"<<sizeof(arr2)<<endl;

    // cout<<"arr2:"<<arr2<<endl;
    // // cout<<*arr<<endl;
    // cout<<"&arr2:"<<&arr2<<endl;

    // //printing array inside main
    // for(int i=0;i<10;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;
    // cout<<endl<<endl<<"Now Calling solve function"<<endl;



    // solve(arr2);
    // cout<<"Wapas main function me aagye h"<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<arr2[i]<<" ";
    // }
    // cout<<endl;

    //---------------------------

    int a=5;
    cout<<"Address of a is:"<<&a<<endl;
    int* ptr=&a;
    cout<<"Address stored of ptr is:"<<ptr<<endl;
    cout<<"Address  of ptr is:"<<&ptr<<endl;
    update(ptr);
    cout<<"value of a is:"<<a<<endl;








 





    return 0;



}