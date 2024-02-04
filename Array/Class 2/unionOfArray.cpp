#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] ={1,3,5,7,9};
    int sizea=5;
    int brr[] = {2,2,4,6,8};
    int sizeb=5;

    // create a vector ans array
    vector<int> ans;

    // pushing all element of vetcor arr
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }

    // pushing all element of vector brr
    for(int i=0;i<sizeb;i++){
        if(arr[i]!=INT32_MIN){
        ans.push_back(brr[i]);
    }
    }

    // prinitg ans array
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    


    return 0;

}