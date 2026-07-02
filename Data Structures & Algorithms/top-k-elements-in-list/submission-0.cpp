class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;//freq counting
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        //bucket sort
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> result;
        for(auto &p: m){
            int num=p.first;
            int f=p.second;

            bucket[f].push_back(num);
        }
        
        for(int i=bucket.size()-1;i>0 ;i--){
            for(int num:bucket[i]){
                if(result.size()==k){break;}
                result.push_back(num);
                
            }
        }

        return result;
        
    }
};
