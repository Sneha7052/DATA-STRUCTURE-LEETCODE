class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxarea=0;
        int length,bredth;
        while(left<right)
        {
             length=min(height[left],height[right]);
             bredth=right-left;

             int curarea=bredth * length;
             maxarea=max(maxarea,curarea);
            if(height[left]<height[right])
             left++;
            else
            right--;
        }
        return maxarea;
    }
};