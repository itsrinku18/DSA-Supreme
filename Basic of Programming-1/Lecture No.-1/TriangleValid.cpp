#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;

    // cout<<"Enter the Traingle side Of A"<<endl;
    // cin>>a;

    // cout<<"Enter the Traingle side Of B"<<endl;
    // cin>>b;

    // cout<<"Enter the Traingle side Of C"<<endl;
    // cin>>c;

    // using if-else statement

    // if(a+b>c && b+c>a && c+a>b){
    //   cout<<"Traingle is Valid"<<endl;
    // }
    // else{
    //     cout<<"Triangle is not Valid"<<endl;
    // }

    // using nested if-else

    // if(a+b>=c){
    //     if(b+c>=a){
    //         if(c+a>=b){
    //             cout<<"Traingle is Valid"<<endl;
    //         }
    //         else{
    //             cout<<"Traingle is not Valid"<<endl;
    //         }
           
    //     }
    //      else{
    //         cout<<"Traingle is not Valid"<<endl;
    //         }
    // }
    //  else{
    //     cout<<"Traingle is not Valid"<<endl;
    //     }

    int angle1,angle2,angle3;
    cout<<"Enter the Engle of Triangle:"<<endl;
    cin>>angle1>>angle2>>angle3;

    if(angle1+angle2+angle3==180){
        cout<<"Triangle Valid"<<endl;
    }
    else{
        cout<<"Triangle is Not Valid"<<endl;
    }



}

