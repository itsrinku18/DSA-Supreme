#include<iostream>
using namespace std;

void printcounitng(int n){
    //base case
    if(n==0){
    return;
    }



    // processing
    cout<<n<<endl; // it print  counting decending order  

    // recursive relation
    printcounitng(n-1);

    // processing
    // cout<<n<<endl; // it print  counting ascending order

    
}



int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>> n;

    printcounitng(n);

   

    return 0;

}