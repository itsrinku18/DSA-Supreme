#include<iostream>
#include<vector>
using namespace std;

vector<bool> Sieve(int n){
    // create a sieve array of N size telling isPrime.
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=false;
 
    for(int i=2;i*i<=n;i++){ // optimization 2: i=2 se i<=suare of i
        if(sieve[i]==true){
            // int j=i*2;
            int j=i*i; //optimize 1: first unmarked number would be i*i,as others have been marked by 2 to(i-1)
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}
// T.C. -> nlog(logn)

int main(){
    vector<bool>sieve=Sieve(25);
    for(int i=0;i<=25;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
    

}