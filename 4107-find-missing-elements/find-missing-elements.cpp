class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> output;
        for(int i = 1; i < nums.size(); i++){
            if((nums[i-1] + 1) == nums[i]){
                continue;
            }
            for(int j = nums[i-1] +1 ; j < nums[i]; j++){
                output.push_back(j);
            }
        }
        return output;
    }
};