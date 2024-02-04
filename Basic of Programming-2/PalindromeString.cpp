#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

// first way

//    string str,strNew;
//     cout<<"Enter a string to check to It is Palindrome or not"<<endl;
//     cin>>str;

//     strNew=str;

//     // reverse the string strNew
//     reverse(strNew.begin(),strNew.end());

//     if(str==strNew){
//         cout<<"This string is palindrome"<<endl;
//     }
//     else{
//         cout<<"Not palindronme string"<<endl;
//     }

// second way

char string1[20];
int  i,length;
int flag=0;

cout<<"Enter a string:"<<endl;
cin>>string1;

length=strlen(string1);

for(i=0;i<length;i++){
    if(string1[i] !=string1[length-i-1]){
        flag=1;
        break;
    }
}

if(flag){
    cout<<"string1"<<" is not a palindrome"<<endl;
}
else{
    cout<<"string1"<<" is a palindrome "<<endl;
}

    return 0;








}