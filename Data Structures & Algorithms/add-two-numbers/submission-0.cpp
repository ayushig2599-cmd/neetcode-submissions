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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* ans=nullptr;
        ListNode* prev;
        while(l1&&l2){
            int num1=l1->val;
            int nums2=l2->val;
            int sum=num1+nums2+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            if(ans==nullptr){
                ans=new ListNode(sum);
                prev=ans;
            }
            else{
                ListNode* temp=new ListNode(sum);
                prev->next=temp;
                prev=prev->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int sum=l1->val+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            if(ans==nullptr){
                ans=new ListNode(sum);
                prev=ans;
            }
            else{
                ListNode* temp=new ListNode(sum);
                prev->next=temp;
                prev=prev->next;
            }
            l1=l1->next;
        }
        while(l2){
         int sum=l2->val+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            if(ans==nullptr){
                ans=new ListNode(sum);
                prev=ans;
            }
            else{
                ListNode* temp=new ListNode(sum);
                prev->next=temp;
                prev=prev->next;
            }
            l2=l2->next;   
        }
        if(carry){
            ListNode* temp=new ListNode(carry);
            prev->next=temp;
            prev=prev->next;
        }
        return ans;
    }
};