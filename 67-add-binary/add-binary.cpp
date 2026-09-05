class Solution {
public:
    string addBinary(string a, string b) {
        int x = a.size()-1;
        int y = b.size()-1;
        string ans = "";
        int carry=0;

        while(x>=0||y>=0||carry){
            int sum = carry;
            if(x>=0){
                sum+=a[x]-'0';
                x--;
            } 
            if(y>=0){
                sum+=b[y]-'0';
                y--;
            }
            ans+=to_string(sum%2);
            carry = sum /2;
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};