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
        ListNode* s1=list1;
        ListNode* s2=list2;
        ListNode* merge=NULL;
        ListNode* head=NULL;
        while(s1!=NULL&&s2!=NULL){
            if(s1->val<s2->val){
                if(merge==NULL){
                    head=s1;
                    merge=head;
                }
                else{
                    merge->next=s1;
                    merge=merge->next;
                }
                s1=s1->next;
            }
            else{
                if(merge==NULL){
                    head=s2;
                    merge=head;
                }
                else{
                    merge->next=s2;
                    merge=merge->next;
                }
                s2=s2->next;
            }
        }
        while(s1!=NULL){
            if(merge==NULL){
                    head=s1;
                    merge=head;
                }
                else{
                    merge->next=s1;
                    merge=merge->next;
                }
                s1=s1->next;
        }
        while(s2!=NULL){
            if(merge==NULL){
                    head=s2;
                    merge=head;
                }
                else{
                    merge->next=s2;
                    merge=merge->next;
                }
                s2=s2->next;
        }
        return head;
    }
};
