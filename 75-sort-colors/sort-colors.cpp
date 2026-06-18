class Solution {
public:
    void sortColors(vector<int>& nums) {
       int c1=0,c2=0,c3=0 ;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==0) c1++;
        else if(nums[i]==1)c2++;
        else c3++;
       } 
       int idx=0;
       while(c1--){
        nums[idx]=0;
        idx++;
       }
        while(c2--){
        nums[idx]=1;
        idx++;
       }
        while(c3--){
        nums[idx]=2;
        idx++;
       }
    }
};