class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i;
        sort(strs.begin(),strs.end());
        string start=strs.front();
        string last=strs.back();
        for( i=0;i<start.length();i++){
            if(start[i]!=last[i]){
                break;
            }
        }
        return start.substr(0,i);
    }
};