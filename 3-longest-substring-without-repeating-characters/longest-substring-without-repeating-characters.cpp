#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int lss = 0, left = 0;

        for (int right = 0; right < s.length(); right++) {
            while (charSet.count(s[right])) {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);
            lss = max(lss, right - left + 1);
        }

        return lss;
    }
};