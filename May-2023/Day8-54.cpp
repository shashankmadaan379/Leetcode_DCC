// Spiral Matrix


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int row=matrix.size(),column=matrix[0].size();
        if(row==0)return result;
        int left=0,right=column-1,top=0,bottom=row-1;
        int direction=0;
        while(left<=right and top<=bottom){
            if(direction==0){
                for(int i=left;i<=right;i++){
                    result.push_back(matrix[top][i]);
                }
                top++;
                direction=1;
            }
            else if(direction==1){
                for(int i=top;i<=bottom;i++){
                    result.push_back(matrix[i][right]);
                }
                right--;
                direction=2;
            }
            else if(direction==2){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                 bottom--;
                 direction=3;
            }
            else if(direction==3){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
                direction=0;
            }
        }
        return result;
    }
};
