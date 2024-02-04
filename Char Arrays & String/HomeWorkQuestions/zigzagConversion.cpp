class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1){
            return s;
        }

        vector<string>zigzag(numRows);
        int i=0,row=0;
        bool direction =1; //1.-> top to bottom
        while(true){
            if(direction){
               // direction  top to bottom
                while(row<numRows && i<s.size()){
                    zigzag[row++].push_back(s[i++]);
                }
                row=numRows-2;
            }
            else{
                // direction bottom to top
                while(row>=0 && i<s.size()){
                    zigzag[row--].push_back(s[i++]);
                }
                // row =1;
                row=1;
            }
            if(i >=s.size()) break;
            direction =!direction;
        }
        string ans="";
        for(int i=0;i<zigzag.size();i++){
            ans+=zigzag[i];
            // cout<<zigzag[i]<<endl;

        }
        return ans;
    }
};