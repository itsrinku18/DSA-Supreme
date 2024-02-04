#include<iostream>
using namespace std;

bool checkOddNEven(int n){
    if(n %2 ==0){
       // cout<<"Given N is Even"<<endl;
       return true;
    }
    else{
      //  cout<<"Given N is Odd"<<endl;
      return false;
    }

}

bool checkOddNEvenUsingBitwiseOperator(int n){
    if((n &1) ==0){
       // cout<<"Given N is Even"<<endl;
       return true;
    }
    else{
      //  cout<<"Given N is Odd"<<endl;
      return false;
    }

}

int main(){
    int n;
    cin>>n;
   // bool ans =checkOddNEven(n);

   bool ans=checkOddNEvenUsingBitwiseOperator(n);

    if(ans){
        cout<<"Given N is Even"<<endl;
    }
    else{
        cout<<"Given N is Odd"<<endl;
    }


}