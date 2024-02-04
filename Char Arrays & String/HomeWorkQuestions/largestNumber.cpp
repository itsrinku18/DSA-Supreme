class Solution {
public:
    
    static bool mycmp(string a,string b){
        string t1=a+b;
        string t2=b+a;
        return t1 > t2;
    }
   
    string largestNumber(vector<int>& nums) {
        vector<string>snums;
        for(auto n:nums){
            snums.push_back(to_string(n)); 
        }
        // it is sort in ascending order
        // sort(snums.begin(),snums.end());

        //using custom compretor we sort the data in descending order
        sort(snums.begin(),snums.end(),mycmp);

        

        if(snums[0]=="0"){
            return "0";
        }
        string ans="";
        // for(int i=snums.size()-1;i>=0;i--){
        //     ans+=snums[i];
        // }
        for(auto str:snums){
            ans+=str;
        }
        return ans;


    }
};