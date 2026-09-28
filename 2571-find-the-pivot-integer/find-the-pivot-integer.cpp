class Solution {
public:
    int pivotInteger(int n) {
        int left = 1 , right = n;
        int sum1 = left,sum2 = right;
        while(left<right){
            if(sum1 < sum2){
                left++;
                sum1 += left;
            }
            else{
                right--;
                sum2 += right;
            }
        }
        if(sum1 == sum2){
            return left;
           
        }
        return -1;
    }
};