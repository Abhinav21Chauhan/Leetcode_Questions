class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        int s1=0;
        int s2=0;
        int j=0;
        int k=n-1;
        for(int i=0; i<n; i++){
            s1 = s1+ mat[i][j];
            s2 = s2 + mat[i][k];
            j++;
            k--;
        }
        int x = s1+s2;
        if(n%2==0){
            return x;
        }
        else {
            int z = n/2;
            int y = x-mat[z][z];
            return y;
        }
    }
};