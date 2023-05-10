// Spiral Matrix II

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>>matrix(n,vector<int>(n));
        int row=n,column=n,count=1;
        int left=0,right=column-1,top=0,bottom=row-1;
        int direction=0;
        while(left<=right and top<=bottom){
            if(direction==0){
                for(int i=left;i<=right;i++){
                    matrix[top][i]=count;
                    count++;
                }
                top++;
                direction=1;
            }
            else if(direction==1){
                for(int i=top;i<=bottom;i++){
                    matrix[i][right]=count;
                    count++;
                }
                right--;
                    direction=2;
            }
            else if(direction==2){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=count;
                    count++;
                }
                 bottom--;
                    direction=3;
            }
            else if(direction==3){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=count;
                    count++;
                }
                left++;
                    direction=0;
            }
        }
        return matrix;
    }
};
