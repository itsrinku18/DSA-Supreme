#include<iostream>
using namespace std;

int main(){
    bool ans;
    
    ans=(3!=5 ) && (3<5);
    cout<<"(3!=5 ) &&(3<5) is :"<<ans<<endl; // true

    ans=(3==5 ) && (3<5);
    cout<<"(3==5 ) &&(3<5) is :"<<ans<<endl;  // false

    ans=(3!=5 ) || (3<5);
    cout<<"(3!=5 ) &&(3<5) is :"<<ans<<endl;  // true

    ans=(3==5 ) || (3>5);
    cout<<"(3==5 ) &&(3>5) is :"<<ans<<endl; // false

    ans=!(5==2);  //true
    cout<<"!(5==2) is :"<<ans<<endl;

    ans=!(5==5 ) ;  //false
    cout<<"!(5==5 ) is :"<<ans<<endl;


    return 0;
}