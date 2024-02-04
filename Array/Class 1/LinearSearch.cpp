#include<iostream>
using namespace std;

bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
       if( arr[i]==key)
        return true;
    }
    return false;
}



int main(){
    int arr[5]={1,3,5,7,8};
    int size=5;
    int key;

    cout<<"Enter the key to find in Array:"<<endl;
    cin>>key;

    // if(find(arr,size,key)){
    //     cout<<"Key is Found"<<endl;
    // }
    // else{
    //     cout<<"key is not found"<<endl;
    // }
    
    // using second method
    bool flag=0;
    // 0 -> Not found
    // 1 -> Found

    //Linear serch method 2
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        flag=1;
        break;
    }

    if(flag){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    } 




    return 0;
}