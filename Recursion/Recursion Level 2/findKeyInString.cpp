#include<iostream>
#include<vector>
using namespace std;

bool checkKey(string& str,int& i,int& n,char& key){
    // base case
    if(i >= n){
        // key is not found.
        return false;
    }

    // ek case solve karu ga 
    if(str[i]==key){
        return true;
    }

    // baki recursion sabhal lega
    int newi=i+1;
    bool ans =checkKey(str,newi,n,key);
    return ans;
    

}



int checkKeyAtIndex(string& str,int i,int& n,char& key){
    // base case
    if(i >= n){
        // key is not found.
        return -1;
    }

    // ek case solve karu ga 
    if(str[i]==key){
        return i;
    }

    // baki recursion sabhal lega
    
    return checkKeyAtIndex(str,i+1,n,key);
    
    

}

void checkKeyPrint(string& str,int i,int& n,char& key){
    // base case
    if(i >= n){
        // key is not found.
        return ;
    }

    // ek case solve karu ga 
    if(str[i]==key){
       cout<<"Found At:"<<i<<endl;
    }

    // baki recursion sabhal lega
    return checkKeyPrint(str,i+1,n,key);
 
}

void storeKey(string& str,int i,int& n,char& key,vector<int>&ans){
    // base case
    if(i >= n){
        // key is not found.
        return ;
    }

    // ek case solve karu ga 
    if(str[i]==key){
        // ans store in vector
       ans.push_back(i);
    }

    // baki recursion sabhal lega
    return storeKey(str,i+1,n,key,ans);
    

}

void keyCount(string& str,int i,int& n,char& key,int& count){
    // base case
    if(i >= n){
        // key is not found.
        return ; 
    }

    // ek case solve karu ga 
    if(str[i]==key){
        count++;
       
    }

    // baki recursion sabhal lega
    return keyCount(str,i+1,n,key,count);
    

}


int main(){
    string str="rinkuttt";
    int n = str.length();
    int i=0;

    char key='t';

    bool ans =checkKey(str,i,n,key);

    cout<<"Answer is:"<<ans<<endl;

    cout<<"-----------------------"<<endl;

    int ans1 =checkKeyAtIndex(str,i,n,key);

    cout<<"Answer is:"<<ans1<<endl;

    cout<<"-----------------------"<<endl;

    checkKeyPrint(str,i,n,key);

    cout<<"-----------------------"<<endl;

    vector<int> ans2;
    storeKey(str,i,n,key,ans2);

    cout<<"printing ans-------"<<endl;
    for(auto val: ans2){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Printing the key count in String ------"<<endl;

    int count=0;

    keyCount(str,i,n,key,count);
    cout<<"Total number of key present in string:"<<count<<endl;



    return 0;

}