#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number:"<<endl;
    cin>>number;

    if(number % 2==0){
        cout<<"You Entered Number is Even"<<endl;
    }
    else{
        cout<<"You Entered Number is Odd"<<endl;
    }
}