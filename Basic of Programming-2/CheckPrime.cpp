#include<iostream>
using namespace std;

bool checkGivenPrime(int n){
    int i=2;
    for(i=2;i<=n/2;i++){
    if(n % i==0){
        return false;
     }
    }
    return true;
}



int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;

    bool ans =checkGivenPrime(n);

    if(ans){
        cout<<n<<" is Prime Number"<<endl;
    }
    else{
        cout<<n<<" is Not Prime Number"<<endl;
    }
    
    return 0;


}