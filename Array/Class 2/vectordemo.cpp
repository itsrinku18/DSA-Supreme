#include<iostream>
#include<vector>
using namespace std;

int main(){

    // create vector
    vector<int>arr;
    // vector<char>arr;
    // vector<bool>arr;

    int ans=(sizeof(arr)/ sizeof(int));

    cout<<ans<<endl;

    cout<<arr.size()<<endl;
    
    // storage that alocated taht how many number we can store
    cout<<arr.capacity()<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(10);

    //remove /delete
    arr.pop_back();

    //print vector array
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // vector initialise in other way
    vector<int> brr(10);

    cout<<"Size of brr:"<<brr.size()<<endl;
    cout<<"Capacity of brr:"<<brr.capacity()<<endl;

    // print this brr
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }

    // vector initialise in other way
    vector<int> crr(10,-1);

    // print this brr
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }

    // vector initalise dyanimc
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    vector<int> drr(n,-101);
    cout<<"Size of brr:"<<drr.size()<<endl;
    cout<<"Capacity of brr:"<<drr.capacity()<<endl;

    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }

    // another way vector create
    vector<int> err{10,20,30,50};

    for(int i=0;i<err.size();i++){
        cout<<err[i]<<" ";
    }

    cout<<endl;

    cout<<"Vector err is Empty or not "<<err.empty()<<endl;

    vector<int> frr;
    cout<<"Vector err is Empty or not "<<frr.empty()<<endl;






    return 0;


}