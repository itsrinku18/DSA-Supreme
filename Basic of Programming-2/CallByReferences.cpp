#include<iostream>
using namespace std;

// actual pass parmeter copy of value a.

void change(int &num){
   cout<<"Before any change value of num:"<<num<<endl;
   num=num+100;
   cout<<"After changes value of num:"<<num<<endl;

}

int main(){
    int a ;
    cin>>a;

    cout<<"Before function call value of a:"<<a<<endl;
    change(a);
    cout<<"After function call value of a:"<<a<<endl;

    return 0;

}