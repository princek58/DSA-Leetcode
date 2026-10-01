class Solution {
public:
    string triangleType(vector<int>& nums) {
        
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        if(a+b>c && b+c>a && c+a>b){
            if(a==b && b==c){
            return "equilateral";
        }
        else if ((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b)){
            return "isosceles";
        }
        else{
            return "scalene";
        }
        }
        return "none";
    }
};