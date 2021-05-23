class Solution {
public:
    void swap(int* a,int* b){
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
    }
    vector<int> sortArrayByParity(vector<int>& A) {
     int start = 0;int end=A.size()-1;
        while(start<end){
            if(A[start]%2!=0){
                swap(&A[start],&A[end--]);
            }
            else
                start++;
        }
        return A;
    }
};