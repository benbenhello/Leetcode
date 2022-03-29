class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        if(haystack.length() < needle.length())
            return -1;
        int result = 0;
        int n = 0;
        while( n < needle.length() && result <= (haystack.length() - needle.length()) ){
            
            if(needle[n] == haystack[result+n]){
                n++;
            }else{
                result++;
                n = 0;
            }
            // cout<<result<<n<<endl;
        }
        if(n == needle.length()){
            return result;
        }else{
            return -1;
        }
    }
};