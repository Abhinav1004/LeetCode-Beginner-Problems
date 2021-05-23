class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size());
        for(int i=0;i<nums.size();i++){
            if(index[i]>=i)
                target[index[i]] = nums[i];
            else{
                int j=i;
                while(j>index[i]){
                    target[j] = target[j-1];
                    j--;
                }
                target[j] = nums[i];
            }
        }
     return target;   
    }
};