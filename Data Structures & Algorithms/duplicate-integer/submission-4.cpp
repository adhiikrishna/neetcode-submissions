class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        unordered_set<int> s;
        for(auto x: nums){
            if(!s.insert(x).second){
                return true;
            }
        }
        return false;
    }
};