#include<iostream>
using namespace std;

int main(){
    int num,reverse=0,digit,temp;
    cout<<"Enter a Positive Number:"<<endl;
    cin>>num;
    temp=num;

    while(num>0){
        digit=num %10;
        reverse=(reverse*10)+digit;
        num=num/10;
    }

    if(num==reverse){
        cout<<"It is Palindrome Number"<<endl;
    }
    else{
        cout<<"It is not Palindrome Number"<<endl;
    }
}