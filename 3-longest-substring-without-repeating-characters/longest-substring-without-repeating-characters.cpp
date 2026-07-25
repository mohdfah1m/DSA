#include<iostream>
#include<algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int lss=0;
        for(int i=0;i<n;i++){
            unordered_set<char> st;
            for(int j=i;j<n;j++){
                if(st.count(s[j]))
                    break;
                st.insert(s[j]);
                lss = std::max(lss, j-i+1);
            }
        }
        return lss;
    }
};