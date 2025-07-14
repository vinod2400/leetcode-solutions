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
        if(head->next == NULL){
            if(head->val == 0) return 0;
            else return 1;
        }
        ListNode* temp = head;
        int ans = 0;
        int cnt = 0;
        while(temp != NULL){
            temp=temp->next;
            cnt++;
        }
        cnt--;
        temp = head;
        while(temp != NULL){
            ans += (temp->val)*pow(2,cnt--);
            temp=temp->next;
        }
        return ans;
    }
};