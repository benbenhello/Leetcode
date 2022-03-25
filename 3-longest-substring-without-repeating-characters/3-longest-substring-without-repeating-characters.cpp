#include<set>
#include<iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int size = 0;
        int i=0;
        int j=0;
        int n = s.length();
        set<char> check;
        while(i<n && j<n){
            if(check.count(s[j])!=0){ // find element in set
                check.erase(s[i++]);
                size--;
            }else{
                check.insert(s[j++]);
                size++;
                if(result < size) result = size;       
            }
            
        }
        return result;
    }
    
};