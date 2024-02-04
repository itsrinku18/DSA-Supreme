#include<iostream>
using namespace std;

int main(){
    double x=1.5;
    // explicit conversion from double to int using by assignment 
    int sum=(int)x+35;
    cout<<sum<<endl;

    // using cast Operator

    float f=3.45;
    int b=static_cast<int>(f);
    cout<<b<<endl;
}