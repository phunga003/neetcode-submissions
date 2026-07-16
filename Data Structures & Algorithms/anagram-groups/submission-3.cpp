class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> store;

        for (string str : strs) {
            vector<int> fr(26, 0);

            for (char ch : str) {
                fr[ch - 'a']++;
            }

            string key = "";
            for (int i{0}; i < 26; i++) {
                key += '=' + fr[i];
            }

            store[key].push_back(str);
        }

        vector<vector<string>> out;
        for (auto& [key, lst] : store) {
            out.push_back(lst);
        }

        return out;
    }
};
