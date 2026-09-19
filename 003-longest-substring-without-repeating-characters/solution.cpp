#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chars;

        int left = 0;
        int maxLength = 0;

        for (int right = 0; right < s.size(); right++) {

            // Remove characters from the left
            // until there are no duplicates.
            while (chars.count(s[right])) {
                chars.erase(s[left]);
                left++;
            }

            chars.insert(s[right]);

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
