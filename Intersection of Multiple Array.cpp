class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            for(int &x:nums[i]){
                m[x]++;
            }
        }
        vector<int>ans;
        for(auto &x:m){
            if(x.second==nums.size()){
            ans.push_back(x.first);
            }
        }
        return ans;
    }
};
