class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> forward(n);
        vector<pair<int,int>> backward(n);
        vector<int> ans(n);

        
        forward[0] = {nums[0], 1};
        backward[n-1] = {nums[n-1], 1};

        for (int i = 1; i < n; i++) {
            forward[i].first = forward[i - 1].first * nums[i];
            forward[i].second = forward[i - 1].first;

            int bi = n - i - 1;
            backward[bi].first = backward[bi + 1].first * nums[bi];
            backward[bi].second = backward[bi + 1].first;
        }

        for (int i = 0; i < n; i++) {
            ans[i] = forward[i].second * backward[i].second;
        }

        return ans;
    }
};
