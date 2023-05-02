// Sign of the Product of an Array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int countNegative=0;
        for(int num=0;num<nums.size();num++){
            if(nums[num]==0){
                return 0;
            }
            else if(nums[num]<0){
                countNegative++;
            }
        }
        if(countNegative%2!=0)return -1;
        else return 1;
    }
};
