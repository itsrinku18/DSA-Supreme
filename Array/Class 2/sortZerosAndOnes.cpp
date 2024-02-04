#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    vector<int>arr{0,2,1,2,0};
    int start=0;
    int end=arr.size()-1;
    int i=0;

    while(i!=end){
        cout<<"for i="<<i<<"start="<<start<<"end="<<end<<endl;
        if(arr[i]==0){
            // swap from left
            cout<<"Found Zero"<<endl;
            cout<<"Before swap:";
            printArray(arr);
            swap(arr[start],arr[i]);
            cout<<"Afterswap:";
            printArray(arr);
            i++;
            start++;
            cout<<"now i="<<i<<"start="<<start<<"end="<<end<<endl;
        }
        else{
            //swap from right
            cout<<"Found One"<<endl;
            cout<<"Before swap:";
            printArray(arr);
            swap(arr[end],arr[i]);
            cout <<"after  swap ";
			printArray(arr);
            end--;
        }

    }
    
    // print array
    for(auto value:arr){
        cout<<value<<" ";
    }


    return 0;


}