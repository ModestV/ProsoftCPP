#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (string word : strs) {
            string key = word;

            // Anagrams have the same sorted representation.
            sort(key.begin(), key.end());

            groups[key].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& pair : groups) {
            result.push_back(pair.second);
        }

        return result;
    }
};
