class Solution {
private:
    unordered_map<char,int> computeMap(string str) {
        unordered_map<char,int> out;
        
        for (auto c : str) {
            out.try_emplace(c, 0);
            out[c]++; 
        }

        return out;
    }

    

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<unordered_map<char,int>> mapStore;
        vector<vector<string>> out;

        for (auto str : strs) {
            auto computedMap = computeMap(str);
            bool found = false;
            
            for(int i{0}; i < mapStore.size(); i++) {
                if (mapStore[i] == computedMap){
                    out[i].push_back(str);
                    found = true;
                    break;
                }
            }

            if (!found) {
                mapStore.push_back(computedMap);
                out.push_back(vector<string>{str});
            }

            
        }

        return out;
    }
};

