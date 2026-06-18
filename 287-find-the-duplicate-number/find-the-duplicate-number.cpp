class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mapp;
        int ans=0;
        for(int i:nums){
            mapp[i]++;
        }
        for(auto it:mapp){
            if(it.second >1){
                ans=it.first;
            }
        }
        return ans;
    }
};