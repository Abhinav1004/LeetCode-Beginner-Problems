class Solution {
public:
    int addDigits(int num) {
        if(num<10){
            return num;
        }
        else{
            int sum_dig = 0;
            while(num){
                int dig = num%10;
                sum_dig+=dig;
                num = num/10;
            }
            return addDigits(sum_dig);
        }
    }
};