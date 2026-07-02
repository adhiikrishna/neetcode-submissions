class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
      vector<int> res(n);
      
      int h=1;
      int t=1;

      for(int i=0;i<n;i++){
        res[i]=h;
        h*=nums[i];
      }
      for(int i=n-1;i>=0;i--){
        res[i]*=t;
        t*=nums[i];
      }
      return res;
    }
};
