class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set(nums.begin(),nums.end());
        int longest=0;

        for(int x:set){
            if(set.find(x-1)==set.end()){
                int current=x;
                int count=1;
            
            while(set.find(current+1)!=set.end()){
                current++;
                count++;
            }
            longest=max(longest,count);
          }
        }
        
        return longest;
    }
};
