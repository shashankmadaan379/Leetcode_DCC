// Matrix Diagonal Sum

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size=mat.size(),result=0;
        for(int i=0;i<size;i++){
            result+=mat[i][i];
            result+=mat[size-1-i][i];
        }
        if(size%2!=0)result-=mat[size/2][size/2];
        return result;
    }
};
