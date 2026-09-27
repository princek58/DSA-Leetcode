class Solution {
public:
    int alternateDigitSum(int n) {
        int length = 0,rem;
        int i =0;
        int temp = n;
       while(temp>0){
        length++;
        temp = temp/10;
       }
       int sum = 0;
       if(length%2!=0){
        while(n>0){
            rem = n%10;
            if(i%2==0){
                sum += rem;
            }
            else{
                sum -= rem;
            }
            i++;
            n = n/10;
        }
       }
       if(length%2==0){
        while(n>0){
            rem = n%10;
            if(i%2!=0){
                sum += rem;
            }
            else{
                sum -= rem;
            }
            i++;
            n = n/10;
        }
       }
       return sum; 
    }
};