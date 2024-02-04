#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int> > arr;

    // vector<int> a{1,2,3};
    // vector<int> b{1,2,3,4,6};
    // vector<int> c{1,2,3};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0;i<arr.size();i++){
    //      // this is used for number of column same -> arr[0].size();
    //      // this is used for number of column different -> arr[i].size();
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // another way to declare the 2D vector 
    int rows=3;
    int cols=5;

    vector<vector<int> >arr(rows,vector<int>(cols,-1));

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

}
