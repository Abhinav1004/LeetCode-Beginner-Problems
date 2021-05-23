class Solution {
public:
    int minIndex(vector<int> ar){
        int min_ele=INT_MAX;int index=0;
        for(int i=0;i<ar.size();i++){
            min_ele = min(min_ele,ar[i]);
        }
        for(int i=0;i<ar.size();i++){
            if(ar[i]==min_ele){
                index = i;
            }
        }
        return index;
    }
    
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        for(int i=0;i<matrix.size();i++){
            int index = minIndex(matrix[i]);
            int ele = matrix[i][index];
            int flag=1;
            for(int i=0;i<matrix.size();i++){
                if(ele<matrix[i][index]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                res.push_back(matrix[i][index]);
            }
        }
        return res;
    }
};