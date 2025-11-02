class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> Bit(101,0);
        int s = INT_MAX;
        int h = INT_MIN;

        for(int i = 0; i < n; i++){
            s = (s > nums[i]) ? nums[i] : s;
            h = (h < nums[i]) ? nums[i] : h;
            Bit[nums[i]] = 1;
        }

        vector<int> output; 
        for(int i = s; i <= h ; i++){
            if(Bit[i]==0){
                output.push_back(i);
            }
        }
        return output;
    }
};