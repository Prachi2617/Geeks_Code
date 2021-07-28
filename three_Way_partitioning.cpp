class Solution{
public:
    //Function to partition the array around the range such
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int l=0,mid=0,h,i;
        h=array.size()-1;
        for(i=0;i<=h;)
        {
            if(array[i]<a)
            {
                swap(array[l++],array[i++]);
            }
            else if(array[i]>b)
            {
                swap(array[h--],array[i]);
            }
            else
                i++;
        }
    }
};
