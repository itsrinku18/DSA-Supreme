#include<iostream>
#include<string.h>
using namespace std;

bool isPalindrome(char word[]){
    int start=0;
    int length=strlen(word);
    int end=length-1;


    while(start <= end){
        if(word[start]!=word[end]){
            return false;  
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}


int main(){
    char arr[100];
    cout<<"Enter the string to check palindrome:"<<endl;
    cin>>arr;

    cout<<"Palindrome Check : "<<isPalindrome(arr)<<endl;




    return 0;
}

