class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<pair<int, int>> indexed_nums;
        for (int i = 0; i < nums.size(); ++i) {
            indexed_nums.push_back({nums[i], i});
        }
        sort(indexed_nums.begin(), indexed_nums.end());
        int h = 0, t = indexed_nums.size() - 1;
        while (h < t) {
            int sum = indexed_nums[h].first + indexed_nums[t].first;
            if (sum == target) {
                int i1 = indexed_nums[h].second;
                int i2 = indexed_nums[t].second;
                result.push_back(min(i1, i2));
                result.push_back(max(i1, i2));
                break;
            }
            else if (sum > target) {
                t--;
            }
            else {
                h++;
            }
        }
        return result; 
    }
};