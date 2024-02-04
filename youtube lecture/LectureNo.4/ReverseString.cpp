#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// reverse a String firstMethod --> making our own reverse function
void reverseString(string& str){
    int n=str.length();
    for(int i=0;i<n/2;i++){
        // using swapping
        swap(str[i],str[n-i-1]);
    }
}

// using while loop  for first method

void reverseStr(string& s){
    int len=s.length();
    int n=len-1;
    int i=0;
    while(i<=n){
        // Using swaping 
     swap(s[i],s[n]);
     n=n-1;
     i=i+1;
    }
}

void reverseStr1( string str){
    for(int i=str.length();i>=0;i--){
        cout<<str[i];
    }
}


int main(){
    string str;
    cout<<"Enter a String:"<<endl;
    cin>>str;

   reverseStr1(str);
   cout<<str<<endl;

   cout<<"Using a Temporary String--->"<<endl;
   string str1=str;
   int n=str1.length();

   // Temporary string tostore the reverse
   string rev;

   for(int i=n-1;i>=0;i--){
    rev.push_back(str[i]);
   }
   cout<<rev<<endl;


    // reverse a string secondMethod --> Using Inbuilt reverse function
    // reverse(str.begin(),str.end());
    // cout<<str;

    return 0;

}