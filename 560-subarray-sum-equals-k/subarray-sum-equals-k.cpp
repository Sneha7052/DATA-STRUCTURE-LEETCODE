class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        int n=nums.size();
        mapp[0]=1;    // so that number itself subarray bhi aa jaye
        int currsum=0, count=0;

        for(int i=0;i<n;i++){
            currsum+=nums[i];
            int need=currsum-k;
            if(mapp.find(need)!=mapp.end()){
                count+=mapp[need];
            }
            mapp[currsum]++;
        }
        return count;
    }
};