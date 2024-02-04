#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number,remainder,ans=0,temp ,count=0,power;
    cout<<"Enter the number :"<<endl;
    cin>>number;

  //  temp=number;

    // while(number!=0){
    //     remainder=number %10;
    //     cout<<remainder<<endl;
    //     ans=ans+remainder*remainder*remainder;
    //     cout<<ans<<endl;
    //     number=number/10;
    // }

    
    // Check ArmStrong Number of n Digits

    // count digit of Number

    while(number !=0){
        number=number / 10;
        count++;
    }

    while(number != 0){
        remainder=number %10;
        // pow() return a double value
        // round() returns the equivalent int
        power=round(pow(remainder,count));
        ans=ans+power;
        number=number/10;
    }
    if(number==ans){
        cout<<"ArmStrong Number"<<endl;
    }
    else{
        cout<<" Not ArmStrong Number"<<endl;
    }


}