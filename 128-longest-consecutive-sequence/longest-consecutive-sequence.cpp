class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         int n=nums.size();
         int maxilen=0;
         int len;
         unordered_set<int>st(nums.begin(),nums.end());
         for(int num:st){
            int temp=num;
             if(st.find(num-1)==st.end()){
                int temp=num;//kyunki yaha hme orginal number ke sath operation krna h
                len=1;
               while(st.find(temp+1)!=st.end()){ //kaha hme search krna h ki iske aage wale numbe hai ya ni , and wo increase ho rha baar baar ,original number pe operstion ni ho rha isliye temp me store ki hu
                len++;
                temp++;
               }
             }
              maxilen=max(maxilen,len);
        }
      return maxilen;
    }
};