#include<iostream>
using namespace std;

void lastOccurenceLR(string str,char x,int i,int& ans){
    // base case
    if(i>=str.size()){
        return;
    }

    // ek case solve kargu ga
    if(str[i]==x){
        ans=i;
    }

    lastOccurenceLR(str,x,i+1,ans);
    

}

void lastOccurenceRL(string& str,char x,int i,int& ans){
    // base case
    if(i < 0){
        return;
    }

    // ek case solve kargu ga
    if(str[i]==x){
        ans=i;
        return;
    }

    lastOccurenceRL(str,x,i-1,ans);
    

}


int main(){
    string str;
    cin>> str;
    char x;
    cin>>x;
    int i=0;

    int ans=-1;
    
    // lastOccurenceLR(str,x,i,ans);

    lastOccurenceRL(str,x,str.size()-1,ans);

    cout<<ans<<endl;



}