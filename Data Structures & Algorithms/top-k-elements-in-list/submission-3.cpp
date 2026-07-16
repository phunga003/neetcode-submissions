class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        for (int num : nums) {
            counter[num]++;
        }

        vector<vector<int>> freq(nums.size()+1);
        for (auto& [num, fr] : counter) {
            freq[fr].push_back(num);
        }

        vector<int> ans;
        for (auto i{freq.size()}; i-- > 0;) {
            if ((int)ans.size() == k) {
                return ans;
            }

            for (int j : freq[i]) {
                if ((int)ans.size() == k) {
                    break;
                }

                ans.push_back(j);
            }
        }

        return ans;
    }
};
