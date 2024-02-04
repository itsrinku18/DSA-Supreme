class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] ={0}; // mapping of each char of language 's' to language 't'
        bool isTCharsMapped[256] ={0}; // store if t[i] char already mapped with s[i]

    for(int i=0;i<s.size();i++){
        if(hash[s[i]]== 0 && isTCharsMapped[t[i]]==0){
            hash[s[i]]=t[i];
            isTCharsMapped[t[i]]=true;
        }

    }

    for(int i=0;i<s.size();i++){
        if(char(hash[s[i]])!=t[i]){
            return false;
        }
    }
    return true;

        
    }
};