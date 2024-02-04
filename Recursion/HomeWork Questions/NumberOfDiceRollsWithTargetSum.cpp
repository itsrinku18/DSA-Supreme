class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        //base case
        // 4th case
        if(target < 0) return 0;
        // 2nd case
        if(n == 0 && target == 0) return 1;
        // 1st case
        if(n == 0 && target != 0) return 0;
        // 3rd case
        if(n != 0 && target == 0) return 0;

        // ek case solution
        int ans = 0;
        for(int i=1;i<=k;i++){
           ans = ans + numRollsToTarget(n-1,k,target-i);
        }

        return ans;


        
    }
};