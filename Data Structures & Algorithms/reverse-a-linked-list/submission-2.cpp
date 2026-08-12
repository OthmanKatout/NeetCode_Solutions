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
        
if(head == NULL)return head;
ListNode * prev = head , * crnt = head->next , * hlp;
if(crnt){
    hlp = crnt -> next;
}
else{
    hlp = NULL;
}
prev->next = NULL;
while(crnt != NULL){

crnt->next = prev;
prev = crnt;
crnt = hlp;
if(hlp)
hlp = hlp->next;

}
return prev;

    }
};
