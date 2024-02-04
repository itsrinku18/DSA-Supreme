#include<iostream>
using namespace std;

// when n value is negative then result will become 0.
int reverseInteger(int n){
    int ans=0;
    // check n is negative
    bool isNegative=false;
    if(n<0){
        isNegative=true;
        n=-n;
    }
    // if(n <= INT8_MIN){
    //     return 0;
    // }
    
    
    while(n>0){
        // if(ans > INT_MAX /10){
        //     return 0;
        // }
        int digit=n %10;
        ans=ans*10+digit;
        n=n/10;

    }
    return isNegative?-ans:ans;
}

int main(){
    int n;
    cout<<"Enter the Value of n:"<<endl;
    cin>> n;

    int result=reverseInteger(n);

    cout<<"Reverse of "<<n<<" is  "<<result<<endl;

}