class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int l=0;
        int r=n-1;
        if(n==0) return true;

         while(l<r){
            //yo avoid non alphanumeric character
            while(l<r && !isalnum(s[l])) l++;
            while(l<r && !isalnum(s[r])) r--;

            if(tolower(s[l])!=tolower(s[r])) return false;
            l++;
            r--;
         }
         return true;
    }
};