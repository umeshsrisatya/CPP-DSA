class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int required = target-nums[i];
            if(mpp.empty() || mpp.find(required) == mpp.end()){
                mpp.insert({nums[i], i});
            }else{
                return {i, mpp[required]};
            }
        }return {-1,-1};
    }
};