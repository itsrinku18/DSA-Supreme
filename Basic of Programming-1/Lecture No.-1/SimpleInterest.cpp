#include<iostream>
using namespace std;

int main(){
    float principal,rate,time,SI;
    cout<<"Enter the principal Amount:"<<endl;
    cin>>principal;
    cout<<"Enter the rate in Percentage:"<<endl;
    cin>>rate;
    cout<<"Enter the time in year:"<<endl;
    cin>>time;

    SI=(principal*rate*time)/100;
    cout<<"Your SI is:"<<SI<<endl;

}