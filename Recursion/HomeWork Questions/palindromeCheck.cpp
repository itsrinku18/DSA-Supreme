#include<iostream>
using namespace std;

bool checkPalindrome(string& st,int start,int end){
    // base case
    if(start >= end){
        return true;
    }
    // ek case solve kargu
    if(st[start]!=st[end]){
        return false;
    }

   return checkPalindrome(st,start+1,end-1);
}

int main(){
    string st;
    cin>> st;
    int start=0;
    int end=st.size()-1;

    // checkPalindrome(st,start,end);

    cout<<checkPalindrome(st,start,end)<<endl;
    return 0;
}