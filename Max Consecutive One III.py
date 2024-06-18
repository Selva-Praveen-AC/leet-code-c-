class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_num=0,max_zero=0;
        int l=0,r=nums.size();

        for(int i=0;i<r;i++){
            if(nums[i]==0){
                max_zero++;
            }
            while(max_zero > k){
                if(nums[l]==0){
                    max_zero--;
                }
                l++;
            }
            int w=i-l+1;
            max_num=max(max_num,w);
        }
        return max_num;
    }
};
