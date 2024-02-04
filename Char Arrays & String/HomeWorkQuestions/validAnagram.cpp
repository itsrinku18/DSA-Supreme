class Solution {
public:
    bool isAnagram(string s, string t) {
        // Method 1-> Using Sorting 
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // if(s==t){
        //     return true;
        // }
        // else{
        //     return false;
        // }
      
        // Method 2-> Using Counting and Frequency Table
        int freqTable[256] ={0};
        for(int i=0;i<s.size();i++){
            freqTable[s[i]]++;
        } // O(n)

        for(int i=0;i<t.size();i++){
            freqTable[t[i]]--;
        } //O(m)

        for(int i=0;i<256;i++){
            if(freqTable[i]!=0){
                return false;
            }
        } //O(256)
        return true;

        
    }
};