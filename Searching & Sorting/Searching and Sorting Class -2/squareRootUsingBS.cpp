#include<iostream>
using namespace std;

int findSqaureRoot(int n){
    int target =n;
    int s = 0;
    int e = n;
    int mid = s +(e-s)/2;
    int ans=-1;
 
    while(s <= e){
        if(mid*mid == target){
            return mid;
        }

        if(mid*mid < target){
            // ans store
            ans = mid;
            //right me search
            s = mid + 1;
        }
        else{
            // left me search
            e = mid - 1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Number to find the quare root:"<<endl;
    cin>>n;

    int ans=findSqaureRoot(n);
    cout<<"Given Number Square root is:"<< ans <<endl;

    // floating part of the square 
    int precision;
    cout<<"Enter the number of floating digits in precision"<<endl;
    cin>> precision;

    double step=0.1;
    double finalAns=ans;

    for(int i=0;i<precision;i++){

        for(double j=finalAns;j*j<=n;j=j+step){
            finalAns= j;
        }
        step = step/10;

    }

    cout<<"Final Ans is:"<<finalAns<<endl;
    


    return 0;

}