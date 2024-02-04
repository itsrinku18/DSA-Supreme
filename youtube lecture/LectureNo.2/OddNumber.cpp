#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    char ch=1024;
    cout<<ch;
    cout<<"Enter the value of n:"<<endl;
    cin>> n;

    if(i>n){
        if(i%2==1){
           cout<<i;
        }
        i=i+1;
    }
}
