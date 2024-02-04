#include<iostream> 
using namespace std;

int main(){
    int firstNumber,secondNumber;
    cout<<"Enter the first Number:"<<endl;
    cin>>firstNumber;
    cout<<"Enter the second Number:"<<endl;
    cin>>secondNumber;

    cout<<"Before swap  value of:"<<firstNumber<<" "<<secondNumber<<endl;
 
 // Method Number 1 --> predefine swap method
    // swap(firstNumber,secondNumber);

 // Method Number 2--> using temp variable  
//   int temp;
//   temp=firstNumber;
//   firstNumber=secondNumber;
//   secondNumber=temp;  

// Method Number 3 --> Without using third variable

//   secondNumber=firstNumber+secondNumber;
//   firstNumber=secondNumber-firstNumber;
//   secondNumber=secondNumber-firstNumber;

// Method Number 4 --->  Using Bitwise XOR Operator

    //  firstNumber=firstNumber^secondNumber;
    //  secondNumber=secondNumber^firstNumber;
    //  firstNumber=firstNumber^secondNumber;

// Method Number 5 --> Using (*) and (/)

//   secondNumber=firstNumber*secondNumber;
//   firstNumber=secondNumber/firstNumber;
//   secondNumber=secondNumber/firstNumber;


// Method Number 6 --> Using arithemtic operator
secondNumber=firstNumber-secondNumber+(firstNumber=secondNumber);

  cout<<" After the swap values:"<<firstNumber<<" "<<secondNumber<<endl;

    return 0;
}