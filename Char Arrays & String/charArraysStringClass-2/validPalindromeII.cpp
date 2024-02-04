class Solution {
public:
   
   bool checkPalindrome(string s,int i,int j){
       while(i<=j){
           if(s[i] !=s[j]){
               return false;
           }
           i++;
           j--;
       }
       return true;
   }


    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<=j){
            if(s[i] !=s[j]){
                // reomve ek bar i ko remove , ya ek bar j ko remove
                return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);

            }
            else{
                // s[i]==s[j]
                i++;
                j--;
            }

        }
        return true;
    }
};