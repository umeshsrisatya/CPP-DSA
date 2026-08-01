class Solution {
private: 
    int calculate(vector<int> &height, int first, int last){
        return min(height[first], height[last])*(last-first);
    }
public:
    int maxArea(vector<int>& height) {
        int first = 0;
        int ans = 0;
        int last = height.size()-1;
        while(first<last){
            ans = max(ans, calculate(height,first,last));
            if(height[first] < height[last]){
                first++;
            }else{
                last--;
            }
        }
        return ans;
    }
};