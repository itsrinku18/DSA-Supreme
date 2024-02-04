#include<iostream>
using namespace std;

int main(){

    int arr[]={1,23,34,45,3,2,2,1,34,33,6,7,8};
    int size=13;
    int count=0;

    for(int i=0;i<size;i++){
       if(arr[i]==2){
        count++;
       }
    }

    cout<<"Count 2 is Array:"<<count<<endl;

    return 0;
}