class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int low=0;
        int maxlen=0;
        vector<int>freq(256,0);
        for(int high=0;high<n;high++)
        {
            freq[s[high]]++;     //expand window
            while(freq[s[high]]>1)
            {
                freq[s[low]]--;   //shrink window
                low++;
            }
            maxlen=max(maxlen,high-low+1);
        }

     return maxlen;
    }
};