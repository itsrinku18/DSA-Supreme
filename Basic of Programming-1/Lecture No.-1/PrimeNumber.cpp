#include<iostream>
using namespace std;

int main(){
    int number;
    bool flag=0;

    cout<<"Enter the Number:"<<endl;
    cin>>number;

    if(number==0 && number==1){
        flag=0;
    }

    for(int i=2;i<number;i++){
        if(number % i==0){
            flag=1;
        }
    }

    if(flag==0){
        cout<<"Given Number is Prime"<<endl;
    }
    else{
        cout<<"Given number is Not Prime"<<endl;
    }

}