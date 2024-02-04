#include<iostream>
using namespace std;

void util(int *p){ // pass by value.
    // p=p+1; // no value change of a.
    *p=*p+1; // valu change of a
}

void solve(int **p){ // pass by value.
    // p=p+1; // no value change of x
    // *p=*p+1; // no value change of x
    **p=**p+1; // value chane of x
}

// pass by value
void solveValue(int num){
    num++;
}

// pass by refernce
void solveValue1(int& num){
    num++;
}

void solveValue2(int* val ){
    *val=*val+1;
}

// pass by value 
void solveValue3(int* val ){
    val=val+1;
}

// pass by refrence
void solveValue4(int*& val ){
    val=val+1;
}

 
int main(){
    //  MultiLevel pointer
    // int a=5;
    // int *p=&a;
    // int **q=&p; // double pointer

    // cout<<a<<endl; //5
    // cout<<&a<<endl; // address of a
    // cout<<p<<endl; // value of p is address of a
    // cout<<&p<<endl; // address of p
    // cout<<*p<<endl; // 5
    // cout<<q<<endl; // address of p
    // cout<<&q<<endl; //address of q;
    // cout<<*q<<endl;  // value of p
    // cout<<**q<<endl; // 5

    //----------------------------------------
    // int a=5;

    // int *p=&a;

    // cout<<"before:-"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // util(p);

    // cout<<"After:-"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    //----------------------------------------
    // int x=12;
    // int *p=&x;
    // int **q=&p;

    // solve(q);
    // cout<<x<<endl;

    //----------------------------------------
    // int a=5;
    // int* p=&a;
    // int** ptr=&p;
    // int** ptr=p;// it show error.

    // **ptr=*ptr+1; // it show error



    //----------------Reference Variable-------------------

    // int a=5;
    // // creating a refrence variable
    // int &b=a;

    // cout<<a<<endl;
    // cout<<b<<endl;

    // a++;
    // cout<<a<<endl;
    // cout<<b<<endl;
    // b++;
    // cout<<a<<endl;
    // cout<<b<<endl;


    //----------------- pass by value ----------

    // int a=5;
    // solveValue(a); // it gives 5 becuase it pass by value.
    // cout<<a<<endl;

    // solveValue1(a); // it gives 6 because it pass by refernce.
    // cout<<a<<endl;

    //----------------------------------------------------
    // int a=12;
    // int*p=&a;
    // solveValue2(p);
    // cout<<a<<endl;

    //----------------------------------------------------
    // int a=5;
    // int *p=&a;
    // cout<<"Before:-"<<endl;
    // cout<<p<<endl;
    // solveValue4(p);
    // cout<<a<<endl;
    // cout<<"After:-"<<endl;
    // cout<<p<<endl;


    //------------------ Return By Refrence ----------------

    //------------------------- Week6 Question----------------------------------
    int arr[10]={0};
    cout<<arr<<endl<<endl;
    cout<<arr+1<<endl<<endl;
    // int * ptr=&arr; // not working
    int (*p)[10]=&arr;

    for(int i=0;i<10;i++){
        // cout<<p[i]<<endl;
        // cout<<*p[i]<<endl;
        cout<<(*p)[i]<<endl;

    }




    


 

    return 0;
}