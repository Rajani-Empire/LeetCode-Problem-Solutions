class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>freq;
        
        for(int x : nums){
            freq[x]++;
        }

        int maxFreq = 0;
        int maxElement = 0;

        for(auto p : freq){
            if(p.second > maxFreq ){
                maxFreq = p.second;
                maxElement = p.first;
            }
        }
        return maxElement ;
    }
};