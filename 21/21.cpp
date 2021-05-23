class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ec) {
        vector<bool> res;int max_candy = INT_MIN;
        for(int i=0;i<c.size();i++){
            max_candy = max(c[i],max_candy);
        }
        for(int i=0;i<c.size();i++){
            if(c[i]+ec>=max_candy)
                res.push_back(true);
            else
                res.push_back(false);
        }
        return res;
    }
};