class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j;int count=0;
        if(ruleKey=="type")
            j=0;
        else if(ruleKey=="color")
            j=1;
        else if(ruleKey=="name")
            j=2;
        
        for(int i=0;i<items.size();i++){
            if(items[i][j]==ruleValue){
                count+=1;
            }
        }
        return count;
    }   
};