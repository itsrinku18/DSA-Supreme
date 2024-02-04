#include<iostream>
using namespace std;

int main(){
int marks;
int bronum;
cout<<"Enter the Marks"<<endl;
cin>>marks;
cout<<"Enter bronum-"<<endl;
cin>>bronum;

if(bronum==0){
    cout<<"Bat banjaegi"<<endl;
}
else{
    cout<<"Bat nhi Banegi"<<endl;
}

// if condition
if(marks>90){
    cout<<"Your grade A"<<endl;
}

// if-else condition
if(marks>35){
    cout<<"You Pass"<<endl;
}
else{
    cout<<"You fail";
}

// if-else if condition

if(marks>=90){
    cout<<"You Score Grade A"<<endl;
}
else if(marks>=80){
     cout<<"You Score Grade B"<<endl;
}
else if(marks >=60){
     cout<<"You Score Grade C"<<endl;
}
else if(marks >=40){
     cout<<"You Score Grade D"<<endl;
}
else{
     cout<<"You Fail"<<endl;
}

// nested if-else
if(marks>=90){
    cout<<"You Score Grade A"<<endl;
} 
else{
    if(marks>=80){
         cout<<"You Score Grade B"<<endl;
}
else{
    if(marks>=60){
      cout<<"You Score Grade C"<<endl;  
    }
    else{
        if(marks>=40){
            cout<<"You Score Grade D"<<endl;
        }
        else{
            cout<<"You Fail"<<endl;
        }
        
    }
}
}
}



