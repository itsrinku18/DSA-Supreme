class Solution {
public:
 
   int mincostTicketsHelper(vector<int>& days, vector<int>& costs,int i){
       // base case
       if(i >= days.size()) return 0;


        // solution of case
        // 1 day pass Taken
        int cost1 = costs[0] + mincostTicketsHelper(days,costs,i+1);

        // 7days pass taken
        int passEndDay = days[i]+7-1;
        int j = i;
        while( j < days.size() && days[j] <= passEndDay){
            j++;
        }
        int cost7 = costs[1] + mincostTicketsHelper(days,costs,j);

        // 30days pass taken
        passEndDay = days[i]+30-1;
        j = i;
        while( j < days.size() && days[j] <= passEndDay){
            j++;
        }
        int cost30 = costs[2] + mincostTicketsHelper(days,costs,j);

        return min(cost1,min(cost7,cost30));


   }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostTicketsHelper(days,costs,0);
        
    }
};