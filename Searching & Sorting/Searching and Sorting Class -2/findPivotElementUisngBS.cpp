#include<iostream>
#include<vector>
using namespace std;

int findPivotElement(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(s==e){
            //single element
            return s;
        }

        // unsorted element handle case
        if(mid + 1 <= e && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid - 1 >=s && arr[mid-1] > arr[mid]){
            return mid-1;
        }
        if(arr[s] >= arr[mid]){
            // left search
            e=mid-1;
        }
       else{
            //right me serach
            s=mid +1;

        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main(){
    vector<int> arr{3,4,5,6,7,1,2};
    // vector<int> arr{7,2,2,3,4,5,6};
    // vector<int> arr{2,4,6,8,9,10};

     int ans=findPivotElement(arr);
    cout<<"Given Array Pivot Element  is:"<<arr[ans]<<endl;

}



// Leet code QuestionNo. -> 33 used pivot function
// int findPivotElement(vector<int> arr){
//     int s = 0;
//     int e = arr.size()-1;
//     int mid = s + (e - s) / 2;

//     while(s <= e){
//         if(s==e){
//             //single element
//             return s;
//         }

//         // unsorted element handle case
//         if(mid + 1 <= e && arr[mid] > arr[mid+1]){
//             return mid;
//         }
//         if(mid - 1 >=s && arr[mid-1] > arr[mid]){
//             return mid-1;
//         }
//         if(arr[s] >= arr[mid]){
//             // left search
//             e=mid-1;
//         }
//         else{
//             //right me serach
//             s=mid +1;

//         }
//         mid = s + (e - s) / 2;
//     }
//     return s;
// }