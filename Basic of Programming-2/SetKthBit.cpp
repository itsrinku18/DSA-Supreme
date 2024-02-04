#include<iostream>
using namespace std;

int setKthBit(int n,int k){
    int mask=1<<k;
    int ans=n |mask;
    return ans;
}

int main(){
    int n,k;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    cout<<"Enter the value of K:"<<endl;
    cin>>k;
    
    int result=setKthBit(n,k);
    cout<<"Resultant value is:"<<result<<endl;

}