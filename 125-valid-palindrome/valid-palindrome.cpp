class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int l=0;
        int r=n-1;
        if(s.size()==0) return true;
        while(l<r){
            if(!isalnum(s[l])) l++;
            else if(!isalnum(s[r])) r--;

            else if(tolower(s[l])!=tolower(s[r]))
            return false;

            else{
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return true;
    }
};