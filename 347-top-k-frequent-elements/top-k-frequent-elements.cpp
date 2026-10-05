class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;

        for(int i=0;i<nums.size();i++)
         {
            mapp[nums[i]]++;  //<element,freq> <first,second>
         }

             priority_queue< pair<int,int>,
             vector<pair<int,int>>
             ,greater<pair<int,int>> >pq;  //minheap,priority queue in pair gives the    importance to first thing on the pair


         for(auto it:mapp){
             pq.push({it.second,it.first}); //<freq, element>
                 if(pq.size()>k){
                  pq.pop();
               }
           }
            vector<int>ans;
             while(pq.size()!=0){
                ans.push_back(pq.top().second);
                pq.pop();
            }
      return ans;
   } 
};