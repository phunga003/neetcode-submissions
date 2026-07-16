#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> visited;

        for (auto num : nums) {
            if (visited.find(num) == visited.end()) {
                visited.insert(num);
            } else {
                return true;
            }
        }

        return false;
    }
};