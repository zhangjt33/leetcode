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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* count=head;
        ListNode* p=head;
        ListNode* c=head;
        
        for(int i=0;i<n;i++)        //count the ahead
            count=count->next;
        
        if(count==NULL){            //the first node should be removed
            p=p->next;
            delete c;
            
            return p;
        }//end if
        
        else{
            
            while(count!=NULL){     //find the node to be deleted,in c
                p=c;
                c=c->next;
                count=count->next;
            }//end while
            
            p->next=c->next;
            delete c;
            return head;
            
        }//end else
        
    }
};
