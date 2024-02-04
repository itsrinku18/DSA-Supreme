#include<iostream>
using namespace std;

int main(){
    int number,fact=1;
    cout<<"Enter the number to calculate the factorial :"<<endl;
    cin>>number;

    // using for loop
    // for(int i=1;i<=number;i++){
    //        fact=fact*i;
    // }

    // using while loop
   
    while(number>=1){
        fact=fact*number;
        number=number-1;
    }


    cout<<"Factorial of this Number is: "<<fact<<endl;
}