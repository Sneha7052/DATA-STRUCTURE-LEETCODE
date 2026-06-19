class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int evencnt=0;
        for(int i=0;i<n;i++){
              int c=0;
              int num=nums[i];
              while(num>0){
                c++;
                num=num/10;
              }
              if(c%2==0){
                evencnt++;
              }
        }
        return evencnt;
    }
};