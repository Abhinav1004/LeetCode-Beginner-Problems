class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string new_string;
        int i=0;int j=0;
        bool flag=true;
        while(i<word1.size() && j<word2.size()){
            if(flag){
                new_string+=word1[i];
                i++;
            }
            else{
                new_string+=word2[j];
                j++;
            }
            flag = !flag;
        }
        while(i<word1.size()){
            new_string+=word1[i];i++;
        }
        while(j<word2.size()){
            new_string+=word2[j];j++;
        }
        return new_string;
    }
};