/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum=0;int a=1;
        vector<int> res;
        while(head){
            res.push_back(head->val);
            head = head->next;
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            sum+=a*res[i];
            a = a*2;
        }
        return sum;
    }
};