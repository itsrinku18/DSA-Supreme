#include<iostream>
using namespace std;

int main(){
    float Fahrenheit;
    cout<<"Enter Your room Temperature in Fahrenheit:"<<endl;
    cin>>Fahrenheit;

    float Celcius=(Fahrenheit-32)*(5.0/9.0);
    cout<<"Fahrenheit to Celcius:"<<Celcius<<endl;

    float Fahrenheit1=(Celcius*9.0/5.0)+32;
    cout<<" Celcius to Fahrenheit:"<<Fahrenheit1<<endl;


}