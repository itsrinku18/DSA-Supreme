#include<iostream>
using namespace std;

int solve(int dividend,int divisor){
    int s=0;
    int e= abs(dividend);
    int mid=s+(e-s)/2;
    int ans=0;

    while(s <= e){
        // perfect solution
        if(abs(mid * divisor) == abs(dividend)){
            ans=mid;
            break;
        }
        // not perfect solution
        if(abs(mid * divisor) < abs(dividend)){
            // ans store
            ans=mid;
            // right me search
            s=s+1;
        }
        else{
            // left me search
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }

    if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0  ) ){
        return ans;
    }
    else{
       return -ans;
    }


    
}

int main(){
    int dividend=65;
    int divisor=4;

    int ans =solve(dividend,divisor);
    cout<<"Ans is "<<ans<<endl;

      // floating part of the divide of two number. 
    int precision;
    cout<<"Enter the number of floating digits in precision"<<endl;
    cin>> precision;

     double step=0.1;
    double finalAns=ans;

    for(int i=0;i<precision;i++){

        for(double j=finalAns;j*divisor<=dividend;j=j+step){
            finalAns= j;
        }
        step = step/10;

    }

    cout<<"Final Ans is:"<<finalAns<<endl;
}