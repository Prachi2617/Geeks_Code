//Expected Time Complexity: O(1)
//Expected Auxiliary Space: O(1)
class Solution{
public:
    int minimumDays(int S, int N, int M)
    {
        int req=S*M;//required food to survive S days
        int x=S/7;// to calcualte total sunday in between
        int y=S-x;//No. of days avaialbe to buy exclusing sunday;
        int days=req/N;//todal days to buy req food
        if(req%N!=0)
            days++;//if days=19.5 then 1 extra day is required
        if(days<=y)
            return days; // if days is smaller or equal to available days then survive
        else
            return -1;// if days is greater than available days we cannot survive
    }
};
