class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(!s.insert(nums[i]).second){
                return true;
            }
        }
        return false;
    }
};