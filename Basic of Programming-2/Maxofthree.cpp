#include<iostream>
using namespace std;

// print Counting
void printCOunting(int n){
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
}

int maxNumbers(int a,int b,int c){
    if(a>b  && a>c){
        return c;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a,b,c;
    int n;
    cout<<" Value of A,B,C:"<<endl;
    cin>>a>>b>>c;

    int largestNumber= maxNumbers(a,b,c);
    cout<<largestNumber<<endl;

    cout<<"Enter the value of N:"<<endl;
    cin>>n;

    printCOunting(n);


    return 0;
}