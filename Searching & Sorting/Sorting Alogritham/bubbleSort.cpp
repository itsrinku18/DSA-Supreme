#include<iostream>
#include<vector>
using namespace std;


 void bubbleSort(int arr[],int size){
    bool swapped;
       for(int round=0;round<size-1;round++){
        swapped = false;
        for(int j=0;j<size-round-1;j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped ==false)
        break;
    }
 }

int main(){
    vector<int>arr{1,7,9,2,3,0};

    int n=arr.size();

    // bubble sort
    for(int round=1;round<n;round++){
          bool swapped=false;
        for(int j=0;j<n-round;j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped ==false)
        break;
    }

    //printing array
    cout<<"Printing Vector ---->"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;

    int arr1[]={1,7,9,2,3,0};
    int size=6;

    bubbleSort(arr1,size);

    //printing array
    cout<<"Printing Vector ---->"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" "; 
    }
    cout<<endl;






    return 0;
}