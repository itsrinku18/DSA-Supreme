#include<iostream>
#include<string.h>
using namespace std;



void  replaceSpace(char sentence[]){
    int i=0;
    int length =strlen(sentence);

    for(i=0;i<length;i++){
        if(sentence[i] == ' '){
            sentence[i]='@';

        }
    }
}

int main(){
    char sentence[100];
    cin.getline(sentence,100);

    cout<<" Before Space Replace Printing sentece : "<<sentence<<endl;

    replaceSpace(sentence);

    cout<<" Before Space Replace Printing sentece : "<<sentence<<endl;








    return 0;
}