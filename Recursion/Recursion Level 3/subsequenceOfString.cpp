#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(string str,string output,int i){
    // base case
    if(i>=str.size()){
        cout<<output<<endl;
        return;
    }
    
    //ek case exclude
    printSubsequence(str,output,i+1);

    // ek case include
    // below line is responsible for concatenation of 
    // output string and ith charcter of string of str.
    // output.push_back(str[i]);
    output=output+str[i];
    printSubsequence(str,output,i+1);
}

void storeSubsequence(string str,string output,int i,vector<string>& ans){
    // base case
    if(i>=str.length()){
        // store
        ans.push_back(output);
        return;
    }
    
    //ek case exclude
    storeSubsequence(str,output,i+1,ans);

    // ek case include
    // below line is responsible for concatenation of 
    // output string and ith charcter of string of str.
    // output.push_back(str[i]);
    output=output+str[i];
    storeSubsequence(str,output,i+1,ans);
}

int main(){
    string str="abcd";
    string output=""; 
    int i=0;
    vector<string>ans;

    printSubsequence(str,output,i);

    storeSubsequence(str,output,i,ans);
    cout<<"Printing Subsequences of string:"<<endl;

    for(auto val:ans){
        cout<<val<<" ";
    }

    cout<<endl;
    cout<<"Size of Vector : "<<ans.size()<<endl;

    return 0;
}