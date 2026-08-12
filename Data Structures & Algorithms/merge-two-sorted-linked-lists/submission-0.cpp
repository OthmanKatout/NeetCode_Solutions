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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
if(!list1 && list2)return list2;
if(!list2 && list1)return list1;
if(!list1 && !list2)return nullptr;
ListNode * first = list1;
ListNode * second = list2;
ListNode * last = nullptr;
ListNode * Head = nullptr;
if(first -> val <= second -> val ){
    last = first;
    Head = first;
    first = first->next;
}
else{
    last = second;
    Head = second;
    second = second ->next;
}

// -------------------------------------------------------

while(first && second){

if(first->val < second->val ){
    last ->next = first;
    first = first ->next;
}
else{
    last ->next = second;
    second = second ->next;
}
last = last->next;

}

if(first){
    last->next = first;
}
else if(second){
    last -> next = second;
}
return Head;

    }
};
