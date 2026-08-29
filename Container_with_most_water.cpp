class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area = 0;
        int ans = 0;

        while(left < right){
            area =(min(height[left],height[right])) * (right-left);
            ans = max(ans,area);
            if(height[left] > height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        
        return ans;
    }
};