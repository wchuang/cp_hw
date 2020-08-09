class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if (nums.size() < 1 || nums.size() > 1000) {
            return {};
        }
        int total = 0;
        std::vector<int> results;
        for (int index = 0; index < nums.size(); index++) {
            int num = nums[index];
            total += num;
            results.push_back(total);
        }
        return results;
    }
};
