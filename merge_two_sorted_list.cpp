/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* result=NULL,*joint=NULL;
        
        if(l1==NULL) return l2;         //if one of list is empty
        if(l2==NULL) return l1;
        
        
         if(l1->val < l2->val) {        //none of list is empty
                result=l1;
                joint=result;
                l1=l1->next;
            }//end if
            
            else{
                 result=l2;
                joint=result;
                l2=l2->next;
            }
        
        while(l1!=NULL&&l2!=NULL){
            
            if(l1->val < l2->val) { 
                joint->next=l1;
                joint=joint->next;
                l1=l1->next;
            }//end if
            
            else{
                joint->next=l2;
                joint=joint->next;
                l2=l2->next;
            }
            
        }//end while
        
        if(l1==NULL) joint->next=l2;
        else joint->next=l1;
        
        
        return result;
    }
};
