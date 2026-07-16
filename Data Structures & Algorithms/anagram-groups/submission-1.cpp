class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> store;

        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            store[key].push_back(str);
        }

        vector<vector<string>> out;
        for (auto& [key, lst] : store) {
            out.push_back(lst);
        }

        return out;
    }
};
