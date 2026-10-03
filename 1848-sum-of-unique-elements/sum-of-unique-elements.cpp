class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum =0,temp= -1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]==temp){
                continue;
            }
            bool match = false;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    temp = nums[i];
                    match = true;
                  break;
                }
               }
                

               
             
        
        if(match == false){
            sum += nums[i]; 
        }
        }
        return sum;
    }
};