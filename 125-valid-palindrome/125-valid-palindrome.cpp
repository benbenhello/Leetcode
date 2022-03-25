class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length();
        bool result = true;
        while(l<r){
            if( !isalpha(s[l]) && !isdigit(s[l]) ){
                l++;
                continue;
            } 
            if( !isalpha(s[r]) && !isdigit(s[r]) ){
                r--;
                continue;
            } 
            if( tolower(s[l]) != tolower(s[r]) ){
                // cout<<s[l]<<s[r]<<endl;
                result = false;
                break;
            }else{
                l++;
                r--;
            }
        }
        return result;
    }
};