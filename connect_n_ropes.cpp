class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int l=0,h,sum,sum1;
        h=height.size()-1;
        int mxl=0;
        sum=INT_MIN;
        int mxr=0;
        while(l<=h)
        {
            if(height[l]<height[h])
            {
                sum1=min(height[l],height[h])*(h-l);
                if(sum1>sum)
                    sum=sum1;
                l++;
            }
            else
            {
                 sum1=min(height[l],height[h])*(h-l);
                 if(sum1>sum)
                    sum=sum1;
                h--;
            }
        }
        return sum;
    }
};
