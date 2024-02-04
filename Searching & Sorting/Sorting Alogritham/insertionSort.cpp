#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int arr[],int size){
     // outer loop - round
    for(int round=1;round<size;round++){
        // Step 1.-> fetch
        int  val =arr[round];
        // Step 2. -> Compare
        int j=round-1;
        for(;j>=0;j--){
            // if before the i element bada than shift
            if(arr[j] >val){
                // Step 3. -> Shift
                arr[j+1]=arr[j];
            }
            else{
                // rukna hai
                break;
            }
        }
        // Step 4.-> copy karna hai
        arr[j+1]=val;
    }
}

int main(){
    vector<int> arr{1,7,9,2,3,0};

    int n=arr.size();

    // outer loop - round
    for(int round=1;round<n;round++){
        // Step 1.-> fetch
        int  val =arr[round];
        // Step 2. -> Compare
        int j=round-1;
        for(;j>=0;j--){
            // if before the i element bada than shift
            if(arr[j] >val){
                // Step 3. -> Shift
                arr[j+1]=arr[j];
            }
            else{
                // rukna hai
                break;
            }
        }
        // Step 4.-> copy karna hai
        arr[j+1]=val;
    }

    cout<<"Printing Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int arr1[]={1,7,9,2,3,0};
    int size=6;

    insertionSort(arr1,size);

    //printing array
    cout<<"Printing Vector ---->"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" "; 
    }
    cout<<endl;

    return 0;
}