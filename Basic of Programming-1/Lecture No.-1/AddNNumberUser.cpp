#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1,num,sum=0;
    
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    
    while(i<=n){
        cout<<"Enter"<<"numbers:";
        cin>>num;
        sum=sum+num;
        i=i+1;
    }
    cout<<"Sum :"<<sum;
}