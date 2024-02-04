#include<iostream>
using namespace std;

int reverseNumber(int num){
    int reminder,reverseNumber=0;
    while(num!=0){
        reminder=num%10;
        reverseNumber=(reverseNumber*10)+reminder;
        num=num/10;
    }
    return reverseNumber;

}

// for string is palindrome Or Not
string isPalindrome(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]){
            return "No";
        }
    }
    return "Yes";

    
}



int main(){
    
    int n,num,digit,rev=0;
    string str1;

    cout<<"Enter a String:"<<endl;
    cin>>str1;

   
    cout<<"Check given String is Palindrome Yes or No -->"<<endl;    

    cout<<isPalindrome(str1)<<endl;

    cout<<"Enter a positive Number:"<<endl;
    cin>>num;
    n=num;

    cout<<"Reverse the Number:"<<endl;
    cout<<reverseNumber(num)<<endl;

    do{
        digit=num % 10;
        rev=(rev *10)+digit;
        num=num / 10;
    }while(num!=0);


    cout<<"The reverse of the  Number is:"<<rev<<endl;

    if(n==rev){
        cout<<"The Number is Palindrome."<<endl;
    }
    else{
        cout<<"The Number is not a Palindrome."<<endl;
    }
return 0;



}
