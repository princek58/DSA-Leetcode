class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int> ans;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                ans.push_back(nums[i]);
            }
        }
        int m = ans.size();
        if (m == 0) {
             return 0; 
        }
        int k = ans[0];
        for(int i=1;i<m;i++){
            k = (k & ans[i]);
        }
        return k;
    }
};