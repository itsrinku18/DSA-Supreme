#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseString(string & str){
    int n=str.length();
    
    // swap charcter starting from two
    
    for(int i=0;i<n/2;i++){
           swap(str[i],str[n-i-1]);  
    }
}

void reverseString1(string str){
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
}

int main(){
    // Using a custome Reverse function for Swapping characters
    // string str1="Hanuman";
    // reverseString(str1);


    // using inbulid reverse function
    // reverse(str1.begin(),str1.end());


    // cout<<"Reverse String is Here:"<<str1;

    // using a Temporary String
    // string str2="Hanuman";
    // int n=str2.length();

    // string rev;
    // for(int i=n-1;i>=0;i--){
    //     rev.push_back(str2[i]);
    // }

    // cout<<rev<<endl;

    // Using a Last to First Approach ‘for‘ Loop  
      
      string str3="RAM";
      reverseString1(str3);
      return 0;

  
 
    
}