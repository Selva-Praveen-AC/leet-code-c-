class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c=0;
        for(int i: jewels){
            for(int j:stones){
                if(i==j){
                    c++;
                }
            }
        }
        return c;
    }
};
