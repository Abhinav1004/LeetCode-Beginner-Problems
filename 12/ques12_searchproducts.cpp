class Solution {
public:
    static bool myCompare(string a,string b){
            return a<b;
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
       vector<vector<string>> final_list;
        for(int i=0;i<searchWord.size();i++){
            vector<string> newlist;
            for(int j=0;j<products.size();j++){
                
                string substring = searchWord.substr(0,i+1);
                if(products[j].compare(0,substring.size(),substring)==0){
                    newlist.push_back(products[j]);
                }
            }
            sort(newlist.begin(),newlist.end(),myCompare);
            if(newlist.size()>3){
                vector<string> subList(newlist.begin(),newlist.begin()+3);
                final_list.push_back(subList);
            }
            else{
                final_list.push_back(newlist);
            }
        }
     return final_list;   
    }
};