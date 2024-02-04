#include<iostream>
using namespace std;

int main(){
    int n,remainder,sum=0,temp;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    temp=n;

    while(n!=0){
        // remainder contains the last digit.
        remainder=n%10;
        sum=sum+(remainder*remainder*remainder);
        // removing last digit from the original number.
        n=n/10;
    }

    if(sum==temp){
        cout<<"ArmStrong Number"<<endl;
    }
    else{
        cout<<"Not ArmStrong Number"<<endl;
    }
    return 0;
}