class Solution {
public:
    void swap(int* a,int* b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int start=0;int end = image.size()-1;
            while(start<end){
                swap(&image[i][start++],&image[i][end--]);
            }
            for(int j=0;j<image[i].size();j++){
                if(image[i][j]==0)
                    image[i][j]=1;
                else
                    image[i][j]=0;
            }
        }
        return image;
    }
};