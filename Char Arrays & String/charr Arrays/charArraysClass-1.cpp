#include<iostream>
#include<string.h>
using namespace std;



int main(){
    // char name[10];
    // cout<<"Enter Your Name:"<<endl;

    // cin>> name;

    // cout<<"Apka Naam: "<<name<<" hai"<<endl;

    // char ch[100];
    // ch[0]='a';
    // ch[1]='b';
    // cin>>ch[2];

    // cout<<ch[0]<<ch[1]<<ch[2]<<endl;

    // char name1[100];

    // cin>>name1;

    // for(int i=0;i<=7;i++){
    //     cout<<"index: "<<i<<"value: "<<name1[i]<<endl;
    // }

    // int value =(int)name1[7];
    // cout<<"value is :"<<value<<endl;

    // taking input with space 
    char name2[50];
    cout<<"Enter Your Name:"<<endl;

    // cin>> name2;
    cin.getline(name2,50);

    cout<<"Apka Naam: "<<name2<<" hai"<<endl;

    return 0;

}