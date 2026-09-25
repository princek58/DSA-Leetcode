class Solution {
public:
    bool isAnagram(string s, string t) {
        int l1 = s.size();
        int l2 = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(l1==l2){
            for (int i =0;i<l1;i++){
                if(s[i]==t[i]){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        else{

        return false;
        }
        return true;
    }
};