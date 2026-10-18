class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>> s;
        for(int num : nums){
            s.insert(num);
        }
        int n = s.size();
        if(n<3){
            return *s.begin();
        }
        int count = 0;
        for(int num : s){

            count++;
            if(count == 3){
                return num;
            }


        }
        return 0;
    }
};