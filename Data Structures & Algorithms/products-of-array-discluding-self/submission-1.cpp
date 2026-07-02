class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        //table
       unordered_map<int,int> map;
       for(int i=0;i<n;i++){
        map[i]=nums[i];
       }
       //values scan
       for(int i=0;i<n;i++){
        int a=1;
        for(auto &x:map){
            if(x.first!=i){
                a = a*x.second;
            }
        }
        result[i]=a;
         
       }

       return  result;
    }
};
