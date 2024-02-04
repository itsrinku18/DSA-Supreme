#include<iostream>
#include<vector>
using namespace std;

void printSubarray(vector<int>&v,int start,int end){
    // base case
    if(end >= v.size()){
        return;
    }
    
    // ek case solve
    for(int i=start;i<=end;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl; 

    // baki recursion samhal lega
    printSubarray(v,start,end+1);

}

void printNextSetSubarray(vector<int>&v){
    

    for(int start=0;start<v.size();start++){
       int end=start;
       printSubarray(v,start,end);
    }

}

int main(){
    vector<int> v{1,2,3,4,5};
    

    // printSubarray(v,0,0);

    printNextSetSubarray(v);


    return 0;
}