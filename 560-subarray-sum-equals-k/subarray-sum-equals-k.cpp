class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        int c=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];

            if(sum==k) c++;

            int val=sum-k;
            if(mapp.find(val)!=mapp.end()){
                c+=mapp[val];
            }
            mapp[sum]++;
        }
           return c;
    }
};