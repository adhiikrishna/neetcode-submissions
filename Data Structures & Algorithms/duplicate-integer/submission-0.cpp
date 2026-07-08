class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int x:nums){
            auto result=set.insert(x);
            if(result.second==false){
                return true;
            }

        }
        return false;
    }
};