//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{

    // In this question find the sum of given array minimum element and maximum element.
   public:
    int findSum(int A[], int N)
    {
        int sum=0;
    	int maxNumber=INT_MIN;
    	int minNumber=INT_MAX;
    	
    	for(int i=0;i<N;i++){
    	    if(A[i]>maxNumber){
    	        maxNumber=A[i];
    	    }
    	    if(A[i]<minNumber){
    	        minNumber=A[i];
    	    }
    	}
    	sum=maxNumber+minNumber;
    	return sum;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends