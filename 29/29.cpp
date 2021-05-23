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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        while(temp){
            st.push(temp->val);
            temp = temp->next;
        }
        int flag=1;
        while(head && !st.empty()){
            if(head->val!=st.top()){
                flag=0;
                break;
            }
            head = head->next;
            st.pop();
        }
        if((head && st.empty())||(!head)&&!st.empty()){
            flag=0;
        }
        if(!flag)
            return false;
        else
            return true;
    }
};