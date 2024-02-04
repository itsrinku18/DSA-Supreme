#include<iostream>
using namespace std;

int factorial(int n){
    cout<<"Function is called for n:"<<n<<endl;
   
    // Base case
    if(n==1)
    return 1;
   
    // int ans=n* factorial(n-1);
    int smallProblemAns=factorial(n-1); // recursive p
    int bigProblemAns =n * smallProblemAns;
    return bigProblemAns;

}



int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>> n;

    int ans=factorial(n);

    cout<<"Answer is:"<<ans<<endl;

    return 0;

}