class Solution {
public:
    int romanToInt(string s) {
        int k=0, c=0;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='I') {
                k=k+1;
                c=1;
            }
            else if (s[i]=='V' && c!=1) {
                k=k+5;
                c=0;
            }
            else if (s[i]=='V' && c==1) {
                k=k+3;
                c=0;
            }
            else if (s[i]=='X' && c!=1) {
                k=k+10;
                c=10;
            }
            else if (s[i]=='X' && c==1) {
                k=k+8;
                c=0;
            }
            else if (s[i]=='L' && c!=10) {
                k=k+50;
                c=0;
            }
            else if (s[i]=='L' && c==10) {
                k=k+30;
                c=0;
            }
            else if (s[i]=='C' && c!=10) {
                k=k+100;
                c=100;
            }
            else if (s[i]=='C' && c==10) {
                k=k+80;
                c=0;
            }
            else if (s[i]=='D' && c!=100) {
                k=k+500;
                c=0;
            }
            else if (s[i]=='D' && c==100) {
                k=k+300;
                c=0;
            }
            else if (s[i]=='M' && c!=100) {
                k=k+1000;
                c=0;
            }
            else if (s[i]=='M' && c==100) {
                k=k+800;
                c=0;
            }
        }
        return k;
    }
};
