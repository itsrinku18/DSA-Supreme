#include<iostream>
using namespace std;

int printDigitInteger(int n ){
    int ans=0;
    while(n!=0){
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    // while(n!=0){
    //     int rem=n % 10;
    //     cout<<rem<<" ";
    //     n=n/10;
    // }
    // cout<<endl;

    // for(;n!=0;n=n/10){
    //     int rem=n%10;
    //     cout<<rem<<" ";
    // }

    // int res=printDigitInteger(n);
    // cout<<res;

    int digit[]={2,4,8,9};

    int ans=0;
    for(int i=0;i<4;i++){
        ans=ans*10+digit[i];
    }
    cout<<ans<<endl;

    return 0;

    

}