class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                count = 0;
            }
            if(s[i]!=' '){
                count++;
            ans = count;
            }
        }
        return ans;
    }
};