// Maximum Number of Vowels in a Substring of Given Length


#define ll long long
class Solution {
public:
    long long power(long long base,long long n, long long mod){
        long long ans=1;
        while(n!=0){
            if(n%2==1){
                ans=(ans*base)%mod;
                n--;
            }else{
                base=(base*base)%mod;
                n=n/2;
            }
        }
        return ans;
    }
    int numSubseq(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(begin(nums),end(nums));
        int start=0,end=nums.size()-1,resultCount=0,mod=1000000007;
        while(start<=end){
            if(nums[start]+nums[end]<=target){
                ll totalSubsequences=power(2,end-start,mod)%mod;
                resultCount=(resultCount+totalSubsequences)%mod;
                start++;
            }
            else end--;
        }
        return resultCount;
    }
};
