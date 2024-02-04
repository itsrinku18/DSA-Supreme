#include<iostream>
using namespace std;

// void checkEvenorNot(int n){
//     if(n % 2==0)
//         goto even;
    
//     else
//         goto odd;
    
//     even:
//     cout<<n<<" is Even"<<endl;
//     return;

//     odd:
//     cout<<n<<" is Odd"<<endl;
// }

void printNumber(){
    int i=1;
    label:
    cout<<i<<" ";
    i++;
    if(i<=10)
        goto label;
    
}

int main(){
    int n;
    // cout<<"Enter the value of n:"<<endl;
    // cin>>n;

    // checkEvenorNot(n);

    printNumber();

    return 0;

}