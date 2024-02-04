//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

   
    bool isPossibleSolution(vector<int>&stalls,int k,int mid){
        // can we place k cows,with at least mid distance between cows.
        
        int c=1;
        int pos=stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            if(stalls[i] - pos >= mid){
                c++;
                pos = stalls[i]; // one more cow has been placed.
            }
            if(c==k){
                return true;
            }
        }
        return false;
    }
    

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());  // T.C. -> O(n log n).
        int start = 0;
        // int end = stalls[stalls.size()-1] - stalls[0];  T.C. -> O(n log n + n log max_distance) and S.C. -> O(n).  
        // or
        int end=1e9;  // using this  T.C. -> O(n*log(10^9)).  and S.C. -> O(1).
    
        
        int ans=-1;
        
        while(start <= end){
            int mid = start +(end-start) /2;
            if(isPossibleSolution(stalls,k,mid)){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            
        }
        return ans;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends