class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int actualsum=n*(n+1)/2;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
        }
        return actualsum-currsum ;
    }
};