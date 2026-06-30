class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int find=target-nums[i];
            if(m.count(find)){
                result.push_back(m[find]);
                result.push_back(i);
                break;
            }
            else{
                m[nums[i]]=i;
            }
        }
      return result;  
    }
};
