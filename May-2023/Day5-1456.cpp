// Maximum Number of Vowels in a Substring of Given Length

class Solution {
public:
    int maxVowels(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_set<char> vowels{'a','e','i','o','u'};
        int result,count=0;
        for(int index=0;index<k;index++){
            count+=vowels.count(s[index]);
            
        }
        // cout<<count;
        result=count;
        for(int index=k;index<s.size();index++){
            count+=vowels.count(s[index])-vowels.count(s[index-k]);
            result=max(result,count);
        }
        return result;;
    }
    
};
