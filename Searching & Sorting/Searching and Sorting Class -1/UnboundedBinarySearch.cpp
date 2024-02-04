#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int f(int x) { return (x*x - 10*x - 20); } 

int binarySearch(int low, int high) 
{ 
    if (high >= low) 
    { 
        int mid = low + (high - low)/2; /* mid = (low + high)/2 */
 
        // If f(mid) is greater than 0 and
        // one of the following two 
        // conditions is true: 
        // a) mid is equal to low 
        // b) f(mid-1) is negative 
        if (f(mid) > 0 && (mid == low || f(mid-1) <= 0)) 
            return mid; 
 
        // If f(mid) is smaller than or equal to 0 
        if (f(mid) <= 0) 
            return binarySearch((mid + 1), high); 
        else // f(mid) > 0 
            return binarySearch(low, (mid -1)); 
    } 
 
    /* Return -1 if there is no 
    positive value in given range */
    return -1; 
} 

int findFirstPositive() 
{ 
    // When first value itself is positive 
    if (f(0) > 0) 
        return 0; 
 
    // Find 'high' for binary search by repeated doubling 
    int i = 1; 
    while (f(i) <= 0) 
        i = i*2; 
 
    // Call binary search 
    return binarySearch(i/2, i); 
} 

int main(){
     cout<<"The value n where f() becomes" <<
        "positive first is "<< findFirstPositive(); 
    return 0; 

}