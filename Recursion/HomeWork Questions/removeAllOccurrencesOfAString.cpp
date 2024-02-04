class Solution {
public:

    void removeOcc(string &s, string &part){

        int found=s.find(part);
        if(found != string::npos){
            // part string has been located
            // please remove
            string left_part=s.substr(0,found);
            string right_part=s.substr(found+part.size(),s.size());
            s=left_part+right_part;

            // baki recursion kar lega
            removeOcc(s,part);
        }
        else{
            // base case
            // all the occurence of part has been removed from s.
            return;
        }
    }

    string removeOccurrences(string s, string part) {
        removeOcc(s,part);
        return s;
    }
};