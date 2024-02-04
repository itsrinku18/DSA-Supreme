#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the value of A:"<<endl;
    cin>>a;
    cout<<"Enter the value of B:"<<endl;
    cin>>b;
    cout<<"Enter the value of C:"<<endl;
    cin>>c;

// using if-else statement
    // if(a>=b){
    //     if(a>=c){
    //         cout<<"A is Greatest Number"<<endl;
    //     }
    //     else{
    //         cout<<"C is Greatest Number"<<endl;
    //     }
    // }
    // else{
    //     if(b>=c){
    //         cout<<"B is Greatest Number"<<endl;
    //     }
    //     else{
    //         cout<<"C is Greatest Number"<<endl;
    //     }
    // }

// using nested if-else statement
// if(a>=b && a>=c){
//     cout<<"A is Greatest Number"<<endl;
// } 
// else if(b>=a && b>=c){
//      cout<<"B is Greatest Number"<<endl;
// }
// else{
//      cout<<"C is Greatest Number"<<endl;
// }

// using Ternary Operator
int largest=a>b?(a>c?a:c):(b>c?b:c);
cout<<"largest is"<<largest;

}
        
  
      

  

