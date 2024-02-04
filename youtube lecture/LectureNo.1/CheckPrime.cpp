#include<iostream>
using namespace std;

int main(){
    int n, div;
    bool flag=0;

    cout<<"Enter the value Of N: "<<endl;
    cin>>n;

    // first user enter 0 and 1 case solve
    if(n==0 || n==1){
        flag=1;
    }
        for(div=2;div<n;div+1){
           if(n%div==0){
                flag=1;
                break;
            }
        }
  
    if(flag==0){
        cout<<"N is Prime Number"<<endl;
    }
    else{
        cout<<"N is not Prime Number"<<endl;
    }
 
return 0;
}