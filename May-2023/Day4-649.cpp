// Dota2 Senate

class Solution {
public:
    string predictPartyVictory(string senate) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int size=senate.size();
        queue<int> radiant,dire;
        for(int i=0;i<size;i++){
            if(senate[i]=='R'){
                radiant.push(i);
            }
            else{
                dire.push(i);
            }
        }
        
        if(radiant.size()==0)return "Dire";
        else if(dire.size()==0)return "Radiant";
        
        while(!radiant.empty() and !dire.empty()){
            if(radiant.front()<dire.front()){
                dire.pop();
                auto frontRadiant=radiant.front();
                radiant.push(frontRadiant+size);
                radiant.pop();
            }
            else{
                radiant.pop();
                auto frontDire=dire.front();
                dire.push(frontDire+size);
                dire.pop();
            }
        }
        if(radiant.size()==0)return "Dire";
        else return "Radiant";
    }
};
