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

// revers the string char array
void reverseCharrArray(char array[]){
    int start=0;
    int length=getLength(array);
    int end = length-1;

    while(start <=end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}



int main(){
    char name[100];
    cout<<"Enter your Name:"<<endl;
    cin>>name;

    cout<<"Printing the char array Before Reverse:"<<endl;
    cout<<name<<endl;

    reverseCharrArray(name);

    cout<<"Printing the char array After Reverse:"<<endl;
    cout<<name<<endl;
    cout<<endl;



    return 0;
}