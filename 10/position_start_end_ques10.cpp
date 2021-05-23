class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
    
        int pos_start=-1;int pos_end=-1;
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                pos_start=i;
                break;
            }
        }
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]==target){
                pos_end=j;
                break;
            }
        }
        
        res.push_back(pos_start);
        res.push_back(pos_end);
        return res;
    }
};