class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich=INT_MIN;
        for(int i=0;i<accounts.size();i++)
        {
          int currmoney=0;
          for(int j=0;j<accounts[i].size();j++){
             currmoney+=accounts[i][j];
          } 
          rich=max(rich,currmoney);
        }
        return rich;
    }
};