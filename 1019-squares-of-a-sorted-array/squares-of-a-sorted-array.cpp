class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg;
        vector<int>pos;
        //split
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0){
                pos.push_back(nums[i]);
               }
              else{
                neg.push_back(nums[i]);
              }
        }
        // square
        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }
          for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());

        //merge
        int i=0,j=0;
        vector<int>ans;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]<neg[j]){
                ans.push_back(pos[i]);
                i++;
            }
            else{
                ans.push_back(neg[j]);
                j++;
            }
        }
        while(i<pos.size()){
            ans.push_back(pos[i]);
            i++;
        }
         while(j<neg.size()){
            ans.push_back(neg[j]);
            j++;
        }
        return ans;
    }
};