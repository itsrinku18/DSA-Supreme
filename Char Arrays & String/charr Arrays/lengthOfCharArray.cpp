#include<iostream>
#include<string.h>
using namespace std;

// Question No.-> Length of String

int getLength(char array[]){
    int length =0;
    int i=0;

    while(array[i] != '\0'){
        length++;
        i++;
    }
    return length;

}


int main(){
    char name[50];
    cout<<"Enter the Name:"<<endl;
    cin>> name;
    cout<<"length of char Array : "<<getLength(name)<<endl;

    cout<<"Length of default Function : "<<strlen(name)<<endl;

    return 0;

}