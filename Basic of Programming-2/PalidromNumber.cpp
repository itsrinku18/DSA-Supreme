#include<iostream>
using namespace std;

int main(){
    int number,temp,remiander,sum=0;
    cout<<"Enter the Number:"<<endl;
    cin>>number;

    temp=number;

// reverse the number
    while(number>0){
        remiander=number % 10;
        cout<<remiander<<endl;
        sum=(sum*10)+remiander;
        cout<<sum<<endl;
        number=number/10;
    }

    if(temp==sum){
        cout<<"Yes palindrome Number"<<endl;
    }
    else{
        cout<<"Not palindrome Nmber"<<endl;
    }



}