class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       vector<int>r;
       vector<int>c;
       int row=matrix.size();
       int col=matrix[0].size(); 

       for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j]==0){
                r.push_back(i);
                c.push_back(j);
            }
         }
       }

       for(int i=0; i<r.size(); i++){
        for(int j=0; j<col; j++){
            matrix[r[i]][j] = 0;
        }
       }

       for(int i=0; i<row; i++){
        for(int j=0; j<c.size(); j++){
            matrix[i][c[j]] = 0;
        }
       }
       
    }
};