class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int one=0,maxi=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                one++;
            }
            else{
                one=0;
            }
        maxi=max(one,maxi);
        }
    return maxi;
    }
};
