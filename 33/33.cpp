class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        stack<char>stkS;
        stack<char>stkT;
        int i = 0;
        while(S[i]!='\0')
        {
            if(S[i]=='#')
            {
                if(!stkS.empty())
                {
                    stkS.pop();
                }
            }
            else
            {
                stkS.push(S[i]);
            }
            
            i++;
        }
        
        i = 0;
        while(T[i]!='\0')
        {
            if(T[i]=='#')
            {
                if(!stkT.empty())
                {
                    stkT.pop();
                }
            }
            else
            {
                stkT.push(T[i]);
            }
            
            i++;
        }
        
        bool flag = true;
        while(!stkS.empty() && !stkT.empty())
        {
            if(stkS.top()!=stkT.top())
            {
                flag = false;
                break;
            }
            stkS.pop();
            stkT.pop();
        }
        
        return flag && (stkS.empty() && stkT.empty());
    }
};