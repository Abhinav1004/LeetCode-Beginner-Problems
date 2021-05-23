class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m = strs[0].size();
        int n = strs.size();
        // int prev = -1;
        int count=0;
        for(int i=0;i<m;i++){
            int prev=-1;
            for(int j=0;j<n;j++){
                if(strs[j][i]<prev){
                    count+=1;
                    break;
                }
                else{
                    prev = strs[j][i];
                }
            }
        }
        return count;
    }
};