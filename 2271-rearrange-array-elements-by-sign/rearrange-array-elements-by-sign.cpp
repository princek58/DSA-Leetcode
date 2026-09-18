class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans1,ans2,ans;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
        }
        //int j=0,k=0;
       //ans1.insert(ans1.end(), ans2.begin(), ans2.end());
        for(int i=0;i<n/2;i++){
            
                ans.push_back(ans1[i]);
            
                ans.push_back(ans2[i]);
            
        }

        
        return ans;
    }
};