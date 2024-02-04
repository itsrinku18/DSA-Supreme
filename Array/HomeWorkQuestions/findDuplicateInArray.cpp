#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> arr){
    int ans=0;
    // xor ing all array element
    for(int i=0;i<arr.size();i++){
        ans =ans ^ arr[i];
    }

    for(int i=1;i<arr.size();i++){
        ans =ans ^ i;
    }

    return ans;
}

int main(){
    vector<int> arr{1,2,3,4,4};

     int ans =findDuplicate(arr);

     if(ans){
        cout<<"Found the duplicate element at Index:"<<ans
<<endl;     }
else{
    cout<<"Duplicate Element Not found"<<endl;
}

    return 0;
}