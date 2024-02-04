#include<iostream>
using namespace std;

int main(){
    int a=43,b=73;

    // Using First Method --> Swap two number using 3rd Variable.
    /*
    cout<<"Before swapping a="<<a<<", b= "<<b<<endl;

    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping a="<<a<<", b= "<<b<<endl;
    */

    // Using Second Method --> Swap two number  without using 3rd Variable.

    /*

    cout<<"Before swapping a="<<a<<", b= "<<b<<endl;

    // assign to b the sum of a and b
    // assign to a difference of b and a
    // assign to b difference of b and a

    b=a+b;
    a=b-a;
    b=b-a;

    cout<<"After swapping a="<<a<<", b= "<<b<<endl;

    */

    // Using Third Method --> Swap two number using Bitwise XOR Operator (^) .
  /*
    cout<<"Before swapping a="<<a<<", b= "<<b<<endl;

    a=a^b;
    b=b^a;
    a=a^b;
    
    cout<<"After swapping a="<<a<<", b= "<<b<<endl;

    */


    // Using Fourth Method --> Swap two number using (*) and (/) Operator .
  
  /*
    cout<<"Before swapping a="<<a<<", b= "<<b<<endl;

    b=a*b;
    a=b/a;
    b=b/a;
    
    cout<<"After swapping a="<<a<<", b= "<<b<<endl;

    */


    // Using Fourth Method --> Swap two number using arithmetic operator .
  
    cout<<"Before swapping a="<<a<<", b= "<<b<<endl;
    
    b=a-b+(a=b);
        
    cout<<"After swapping a="<<a<<", b= "<<b<<endl;



}