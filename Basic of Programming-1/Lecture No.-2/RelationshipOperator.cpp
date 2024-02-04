#include<iostream>
using namespace std;

int main(){
    int a=3;
    int b=5;

    bool ans;    
    ans=a==b;
    cout<<"3 == 5 is :"<<ans<<endl;
    ans=a!=b;
    cout<<"3 != 5 is :"<<ans<<endl;
    ans=a>b;
    cout<<"3 > 5 is :"<<ans<<endl;
    ans=a<b;
    cout<<"3 < 5 is :"<<ans<<endl;
    ans=a>=b;
    cout<<"3 >= 5 is :"<<ans<<endl;
    ans=a<=b;
    cout<<"3 <= 5 is :"<<ans<<endl;
    
}