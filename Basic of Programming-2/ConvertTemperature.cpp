#include<iostream>
using namespace std;

double celciusToKelvin(double celcius){
    double kelvin=celcius+273.15;
    return kelvin;
}

double celciusToFarh(double celcius){
    double farhent=celcius*1.80+32;
    return farhent;
}


int main(){
    double celcius;
    cout<<"Enter the value of Celcius:"<<endl;
    cin>>celcius;

    double k=celciusToKelvin(celcius);
    cout<<"Celcius to Kelvin:"<<k<<endl;

    double f=celciusToFarh(celcius);
    cout<<"Celcius to Kelvin:"<<f;

    return 0;



}