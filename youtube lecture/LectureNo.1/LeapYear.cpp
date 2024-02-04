#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a Year:"<<endl;
    cin>>year;

    // if(year % 400==0){
    //     cout<<year<<"  is a leap Year."<<endl;
    // }
    // else if(year %100 ==0){
    //     cout<<year<<" is not a leap Year."<<endl;
    // }
    // else if( year  % 4==0){
    //     cout<<year<<" is a leap Year."<<endl;
    // }
    // else{
    //     cout<<year<<" is not a leap year."<<endl;
    // }

    // using Nested if

    // if(year % 4==0){
    //     if(year % 100==0){
    //         if(year % 400==0){
    //             cout<<year<<" is a leap Year.";
    //         }
    //         else{
    //             cout<<year<<" is not a leap Year.";
    //         }
    //         }
    //         else{
    //             cout<<year<<" is a leap Year.";
    //         }
    //     }
    //     else{
    //         cout<<year<<" is not a leap Year.";
    //     }

    // using  Logical Operator
    if((year % 4==0) && (year % 100!=0) || year % 400==0){
         cout<<year<<" is a leap Year.";
    }
    else{
         cout<<year<<" is not a leap Year.";
    }
        return 0;
    }

