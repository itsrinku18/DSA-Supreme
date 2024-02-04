#include<iostream>
using namespace std;
/*

int main(){
    int a='a';
    int b='A';
    char ch=97;
    char ch1=98;
    cout<<a<<b<<ch<<ch1<<endl;
}



// Implicit type Conversion -> it should be automatic cconversion low  to higher data type.

int main(){
    short x=200;
    int y;
    y=x;
    cout<<"Value of x:"<<x<<endl;
    cout<<"Value of y:"<<y<<endl;

    int num=20;
    char ch;
   
    int res=num+'b';
    cout<<"Implicit type  casting char to int('a to 20): "<<res<<endl;
    
    float val=num+'A';
    cout<<"Implicit type conversion int to float:"<<val <<endl;
}

*/

//Explicit type Conversion--> It is manual type casting in a program.
// --> the user or programmer change from one data type to another according to our requirement.
// --> It uses the cast() operator to change the type of a variable.
// --> (type)expression;


int main(){
    int a,b;
    float res;

    a=10;
    b=3;

    cout<<"Implicit Conversion ---"<<endl;
    cout<<"Result: "<<a/b<<endl;

    cout<<"Explicit type Conversion--->"<<endl;

    res=(float)a/b;
    cout<<"Result after Explicit type Conversion::"<<res<<endl;


}
