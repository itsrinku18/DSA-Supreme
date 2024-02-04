#include<iostream>
#include<string.h>
using namespace std;

bool compareString(string a,string b){
    if(a.length() != b.length())
     return false;
    
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                return false;
            }
        
        }
        return true;
     
    
    }

int main(){
    string greeting="Hello";
    cout<<greeting<<endl;
    string str;
    cin>> str; 
    // getLine(str,cin);

    cout<<"Size of String:"<<str.length()<<endl;
    cout<<str.size();

    cout<<"Is Empty"<<str.empty()<<endl;
    str.push_back('A');

    cout<<str<<endl;

    str.pop_back();
    cout<<str<<endl;

    // substring use->
    cout<<str.substr(1,3)<<endl;


    // compare use ->
    string a="love";
    string b="love";

    if(a.compare(b)==0){
        cout<<"a and b are exactly same string"<<endl;
    }
    else{
        cout<<"a and b are not same"<<endl;
    }

    cout<<compareString(a,b)<<endl;;

    string x="bbb";
    string y="bbba";

    cout<<x.compare(y)<<endl;

    // find  use ->

    string sentance="Hello are you";
    string target="rinku";

    if(sentance.find(target)==std::string::npos){
        cout<<"Not found"<<endl;
    }
    

    // replace use ->

    string str1="This is my first message";
    string word="hello";

    str1.replace(11,5,word);
    cout<<str1<<endl;
    str1.replace(11,5,"Rinku");
    
    cout<<str1<<endl;

    str1.erase(10,10);

    cout<<str1<<endl;

    

    


    return 0;
}