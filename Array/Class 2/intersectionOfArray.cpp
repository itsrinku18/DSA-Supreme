#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arrA{1,2,3,4,6,8};
    vector<int>arrB{3,4,9,10};

    vector<int>ans;

    // outer loop on arrA vector
    for(int i=0;i<arrA.size();i++){
        int element=arrA[i];
        // for every element of arrB
        for(int j=0;j<arrB.size();j++){
            if(element == arrB[j]){
                arrB[j]=-1;
                ans.push_back(element);
            }
        }
    }

    //print ans
    for(auto value: ans){
        cout<<value<<" ";
    }

    cout<<endl;


    // vector<int> arr{1,2,3,3,4,6,8};
	// vector<int> brr{3,3,4,10};

	// vector<int> ans ;

	// //outer loop on arr vector
	// for(int i=0; i<arr.size(); i++) {
		
	// 	int element = arr[i];
	// 	// for every element, run loop on brr
	// 	for(int j=0; j<brr.size(); j++) {
	// 		if(element == brr[j]) {
	// 			//mark 
	// 			brr[j] = -1;
	// 			ans.push_back(element);
	// 		}
	// 	}
	// }

	// //print ans 
	// for(auto value: ans) {
	// 	cout << value << " ";
	// }

	// cout << endl;

    return 0;

}