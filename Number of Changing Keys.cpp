class Solution {
public:
    int countKeyChanges(string s) {
        int c = 0;

        for(auto &x:s){
            x=tolower(x);
        }

        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])continue;
            c++;
        }
    return c;
    }
};
