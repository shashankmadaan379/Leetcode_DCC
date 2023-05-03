// Find the Difference of Two Arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       unordered_map<int,int> mpNums1,mpNums2;
       vector<int> resultNums1,resultNums2;
        for(auto num:nums1){
            mpNums1[num]++;
        }
        for(auto num:nums2){
            mpNums2[num]++;
        }
        
        //find common values and store in the set
        set<int> s;
        for(auto num:nums1){
            if(mpNums2.find(num)!=mpNums2.end()){
                s.insert(num);
            }
        }
        
        //find non-common values 
        for(auto it:mpNums1){
            if(s.find(it.first)==s.end()){
                resultNums1.push_back(it.first);
            }
        }
        for(auto it:mpNums2){
            if(s.find(it.first)==s.end()){
                resultNums2.push_back(it.first);
            }
        }
        return {resultNums1,resultNums2};
    }
};
