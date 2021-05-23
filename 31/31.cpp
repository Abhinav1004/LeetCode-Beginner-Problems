
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> totalSum;
        int finalIndex=0;
        
        for(auto str : ops){
            if(isdigit(str[0]) || str[0] == '-'){
                totalSum.push_back(stoi(str));
            }
            else if(str[0] == '+'){
                totalSum.push_back(totalSum[finalIndex]+ totalSum[finalIndex-1]);
            }
            else if(str[0] == 'D'){
                totalSum.push_back(2 * totalSum[finalIndex]);
            }
            else if(str[0] == 'C'){
                totalSum.pop_back();
            }
            
            finalIndex = totalSum.size() - 1;
        }
        
        return sumOfVector(totalSum);
    }
    
    int sumOfVector(vector<int> vectorToSum){
        int count = 0;
        for(auto num : vectorToSum){
            count += num;
        }
        
        return count;
    }
};