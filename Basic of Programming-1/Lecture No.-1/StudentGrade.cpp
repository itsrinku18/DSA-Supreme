#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the Marks:"<<endl;
    cin>>marks;


// using nested if-else
    // if(marks>=90){
    //     cout<<"Grade A"<<endl;
    // }
    // else{
    //     if(marks>=80){
    //         cout<<"Grade B"<<endl;
    //     }
    //     else{
    //         if(marks>=60){
    //             cout<<"Grade C"<<endl;
    //         }
    //         else{
    //             if(marks>=40){
    //                 cout<<"Grade D"<<endl;
    //             }
    //             else{
    //                 cout<<"Fail  "<<endl;
    //             }
    //         }
    //     }
    // }


    // using elseif -else
    if(marks>=90){
    cout<<"Grade A"<<endl;
    }
    else if(marks>=80){
    cout<<"Grade B"<<endl;
    }
    else if(marks>=60){
    cout<<"Grade C"<<endl;
    }
    else if(marks>=40){
    cout<<"Grade D"<<endl;
    }
    else{
     cout<<"Fail  "<<endl;
    }
}
    
   