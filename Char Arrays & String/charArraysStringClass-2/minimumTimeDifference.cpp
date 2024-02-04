class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // Step1. -> convert time string into minutes integer value
        vector<int> minutes;

        for(int i=0;i<timePoints.size();i++){
            string curr =timePoints[i];

            int hours =stoi(curr.substr( 0,2));
            int mini =stoi(curr.substr(3,2));
            int totalMinutes = hours*60 +mini;
            minutes.push_back(totalMinutes);
        }

        // Step2. -> sort
        sort(minutes.begin(),minutes.end());

        // Step3. -> differnce and calculate min difference

        int mini = INT_MAX;
        int n=minutes.size();

        for(int i=0;i<n-1;i++){
            int diff= minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }

        // something missing -THIS IS THE GAME
        int lastDiff =(minutes[0]+1440) -minutes[n-1];
        mini=min(mini,lastDiff);

        return  mini;
    }
};