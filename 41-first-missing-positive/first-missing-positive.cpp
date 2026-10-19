class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mapp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mapp[nums[i]]=1;
        }
       for(int i=1;i<=n+1;i++){ // not from 0 kyuunki 0 postive number ni h
       //toh range always 1 se suru hogi
        if(mapp.find(i)==mapp.end()){
            return i;
        }
       }
        return n+1;// agar kuch ni mila toh [0,1,2] toh last 3 (n+1) return ho jayega
    }
};