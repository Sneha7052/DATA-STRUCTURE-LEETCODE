class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freqcnt(256,0);
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            freqcnt[s[i]-'a']++;
             freqcnt[t[i]-'a']--;
        }
        for(int i=0;i<256;i++){
            if(freqcnt[i]!=0)
            return false;
        }
        return true;
    }
};