#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int arr[],int size){
    // Outer loop -> (n-1) rounds
    for(int i=0;i<size-1;i++){
        // store min Index 
        int minIndex=i;
        // Inner loop  -> index of minElement in range of i->n
        for(int j=i+1;j<=size;j++){
            // To sort in descending order, change > to < in this line.
            if(arr[j]  > arr[minIndex]){
            //new minimum , then store
            minIndex=j;
            }
        }
         //swap
    swap(arr[i],arr[minIndex]);
    }
}



int main(){
    vector<int> arr{1,7,9,2,3,0};

    int n=arr.size();

    // Outer loop -> (n-1) rounds
    for(int i=0;i<n-1;i++){
        // store min Index 
        int minIndex=i;
        // Inner loop  -> index of minElement in range of i->n
        for(int j=i+1;j<=n;j++){
            // To sort in descending order, change > to < in this line.
            if(arr[j] < arr[minIndex]){
            //new minimum , then store
            minIndex=j;
            }
        }
         //swap
    swap(arr[i],arr[minIndex]);
    }

    // after sorting the vector printing.
    cout<<"Printing vector ---->"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int arr1[]={1,7,9,2,3,0};
    int sizeArr=6;

    selectionSort(arr1,sizeArr);
    
    cout<<"Printing array  ----->"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    return 0;
   

}

