class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n=nums.size();
         int maxilen=0;
         int len;
         unordered_set<int>st(nums.begin(),nums.end());
         for(int num:st){
             if(st.find(num-1)==st.end()){
                int temp=num;
                len=1;
               while(st.find(temp+1)!=st.end()){
                len++;
                temp++;
               }
             }
              maxilen=max(maxilen,len);
        }
      return maxilen;
    }
};