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
    ListNode* reverseList(ListNode* head) {
        
        ListNode * ptr = head;
        vector<int>v;
        for(;ptr != NULL ; ptr = ptr->next){
            v.push_back(ptr->val);
        }
        int i = 0 , j = v.size() - 1;
        while(i <= j){
            int tmp = v[i];
            v[i] = v[j];
            v[j] = tmp;
            i++;
            j--;
        }
        ptr = head;
        i = 0;
        while(ptr != NULL){
            ptr->val = v[i];
            ptr = ptr->next;
            i++;
        }

return head;
    }
};
