class Solution {
public:
    static bool myCompare(const pair<int,int> &a,const pair<int,int> &b){
        if(a.second==b.second)
            return a.first>b.first;
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map <int,int> m;
        vector<pair<int,int>> v;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        copy(m.begin(),m.end(),back_inserter(v));
        sort(v.begin(),v.end(),myCompare);
        
        for(int i=0;i<v.size();i++){
            while(v[i].second--){
                res.push_back(v[i].first);
            }
        }
        return res;
    }
};