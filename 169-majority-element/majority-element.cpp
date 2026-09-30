class Solution {
public:
    int majorityElement(vector<int>& nums){
        unordered_map<int,int>mapp;
        int n=nums.size();

        for(int i=0;i<n;i++){
            mapp[nums[i]]++;
        }
        
        int ans;
        for(auto it:mapp) {
            if(it.second>n/2){
                 return ans=it.first;
             }
        }
        return -1;
    }
};