#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout<<"Enter the Positive Natural Number:"<<endl;
    cin>>num;
    
    for(int i=1;i<=num;i++){
        sum=sum+1;
    }
    cout<<"Sum of 1 to n Natural Number is:"<<sum<<endl;
}