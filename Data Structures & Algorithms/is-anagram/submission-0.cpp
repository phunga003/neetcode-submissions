#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int t_length = t.length();
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> sFreq, tFreq;

        for (int i{t_length}; i-- > 0;) {
            ++sFreq[s[i]];
            ++tFreq[t[i]];
        }

        return sFreq == tFreq;
    }
};
