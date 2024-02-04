#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     int count=0;

    while(n!=0){
        if(n & 1){
            cout<<"get set bit"<<count<<endl;
            count++;
        }
        // right shift
        n=n>>1;
    }
    cout<<"Number of SetBit:"<<count<<endl;
}