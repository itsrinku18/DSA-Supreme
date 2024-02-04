#include<iostream>
using namespace std;

// normal method to find the exponentiation
int slowExponentiation(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans*=a;
    }
    return ans;
}
// t.c.-> O(b)

int fastExponentiation(int a, int b){
    int ans=1;
    while(b > 0){
        if(b & 1){
            //odd
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;

}
// t.c.-> O(logb)



int main(){
    // normal method
    cout<<fastExponentiation(5,4)<<endl;

    return 0;
}