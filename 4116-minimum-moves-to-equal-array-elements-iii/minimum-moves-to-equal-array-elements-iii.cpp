class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int m = *max_element(nums.begin(),nums.end());
        int count = 0;
        for(int i=0;i<n;i++){
            while(nums[i]!=m){
                nums[i] += 1;
                count ++;
            }
        }
        return count;
    }
};