#include<iostream>
#include<vector>
using namespace std;

void resverseString(string& s,int start,int end){
    // base case
    if(start >= end){
        return;
    }
    // ek case solve 
    swap(s[start],s[end]);

    resverseString(s,start+1,end-1);

}

int main(){ 
    string s;
    cin>>s;
    int start=0;
    int end=s.size()-1;

    resverseString(s,start,end);

    cout<<s<<endl;

    return 0;
}