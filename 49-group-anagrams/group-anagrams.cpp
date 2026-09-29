class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>mapp;
          for(auto s:strs){
            string temp=s;
            sort(s.begin(),s.end());
            mapp[s].push_back(temp);
        }
        vector<vector<string>>ans;
        for(auto it:mapp){
              ans.push_back(it.second);
        }
        return ans;
    }
};