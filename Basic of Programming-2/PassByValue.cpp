#include<iostream>
using namespace std;

// this fuction is pass by value -> It means it create copy of given variable at 
// different location and modification on that particular copy variable.
// void print(int num){
//     ++num;
//     num++;
//     cout<<num;
// }

int getAdd(int a,int b){
    int result=a+b;
    return result;
}

int main(){

    // int num=19;
    // num++;
    // ++num;

    // cout<<num<<endl;
    // print(num);
    
    int a,b;
    cout<<"Enter the Value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    int sum=getAdd(a,b);

    cout<<"Addition result is :"<<sum;

}