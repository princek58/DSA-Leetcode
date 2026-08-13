class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int n=x,rem;
        long temp = 0;
        while(n>0){
            rem=n%10;
            temp=temp*10+rem;
            n/=10;
        }
        if(temp==x){
            return true;
        }
        else{
            return false;
        }
    }
};