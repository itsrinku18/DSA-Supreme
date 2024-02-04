#include<iostream>
using namespace std;

double kmToMiles(double km){
    double miles=(1/1.609)*km;
    return miles;
}

int main(){
    double km;
    cin>>km;

    double miles=kmToMiles(km);
    cout<<miles;

}