class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int count=0;
       int row = grid.size();
       int col = grid[0].size();
       for(int i=row-1; i>=0; i--){
        for(int j=col-1; j>=0; j--){
            if(grid[i][j]<0) count++;
        }
       }
       return count;
    }
};