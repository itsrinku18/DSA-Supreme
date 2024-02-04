#include<iostream>
using namespace std;

 long long int findFactorial(long long int n){
   long long int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }

    return fact;
 }

int main(){
    int n;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;

    long long int ans= findFactorial(n);

    cout<<"Factorial of "<<n<<" is :"<<ans<<endl;



}
