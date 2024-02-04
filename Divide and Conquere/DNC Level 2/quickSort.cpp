#include<iostream>
using namespace std;


int partition(int arr[],int s,int e){
    //step1. choose pivot element 
    int pivotIndex = s;
    int pivotElement=arr[s];

    // Step2. Find right position for pivot element and place it there.
    int count=0;

    for(int i=s+1; i<=e;i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }

    // jab main loop se bahar hu ,toh mere pass pivot ki right postion ka index ready hai
    int rightPivotIndex=s+count;
    swap(arr[pivotIndex],arr[rightPivotIndex]);
    pivotIndex=rightPivotIndex;


    // Step3. left me chote and right me bade

    int i=s;
    int j=e;

    while(i < pivotIndex && j >pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        // 2 case ho skte hai
        // A -> you found the element to swap.
        // B -> no need to swap.
        if(i < pivotIndex && j >pivotIndex){
            swap(arr[i],arr[j]);
        }

        return pivotIndex;


    }





}

void quicksort(int  arr[],int s,int e){
    // Base case
    if(s >= e){
        return ;
    }

    // partion 
    int p = partition(arr,s,e);

    // recursive calls 
    //left
    quicksort(arr,s,p-1);

    //right
    quicksort(arr,p+1,e);


}

int main(){
    int arr[]={8,11,1,1,1,1,1,3,3,3,3,3,4,20,50,30};
    int n=16;

    int start = 0;
    int end = n-1;

    quicksort(arr,start,end);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}