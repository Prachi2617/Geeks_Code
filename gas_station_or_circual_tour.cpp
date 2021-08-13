class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int i, start=0, cal=0, d=0,n;
        n=gas.size();
        for(i=0;i<n;i++)
        {
            cal+=gas[i] -cost[i];
            if(cal<0)
            {
                start=i+1;
                d+=cal;
                cal=0;
            }
        }
        if((cal+d)>=0)
            return start;
        else
            return -1;
    }
};
