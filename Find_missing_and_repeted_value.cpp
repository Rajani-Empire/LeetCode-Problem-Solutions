class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        map<int,int>freq;
        vector<int> ans;
        int n = grid.size();



        for(int i = 0; i < n; i++) {
             for(int j = 0; j < n ; j++){
                freq[grid[i][j]]++;
             }
        }
        

        for(int i = 1; i <= n*n; i++) {
            if(freq[i] == 2) {
                ans.push_back(i);
            }
        }

       
        for(int i = 1; i <= n*n; i++) {
            if(freq[i] == 0) {
                ans.push_back(i);
            }
        }
        
       
      

     return  ans;

    }
};