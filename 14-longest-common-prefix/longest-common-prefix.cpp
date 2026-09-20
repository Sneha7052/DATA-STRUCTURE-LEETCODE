class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();
        int i;
        for ( i = 0; i < first.size(); i++) {
            if (first[i] != last[i]) {
                break;
            }
        }
        return first.substr(0, i );
    }
};