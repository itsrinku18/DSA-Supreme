#include<iostream>
using namespace std;

int main(){
    int a=107;
    char b='a';

    // b is implicitily converted to int ASC value of 'a' is 97;
    a=a+b;
    
    // c is implicitly converted to float 
    float c=a+1.5;
    
    
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
    cout<<"c ="<<c<<endl;


}