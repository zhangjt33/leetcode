/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include<queue>
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*> a,b;
        TreeNode* anode,*bnode;
        
        if(p==NULL&&q==NULL) return true;
        
        if(p==NULL&&q!=NULL) return false;
        
        if(p!=NULL&&q==NULL) return false;
        
        a.push(p);                              //both p and q is not empty tree!
        b.push(q);
        
        while(a.size()!=0 && b.size()!=0){
            
            anode=a.front();a.pop();
            bnode=b.front();b.pop();
            
            if(anode->val != bnode->val) return false;              //check the root value
            
            if(anode->left==NULL&&bnode->left!=NULL) return false;  //check left child
        
            if(anode->left!=NULL&&bnode->left==NULL) return false;
            
            
            if(anode->left!=NULL&&bnode->left!=NULL){
                 a.push(anode->left);b.push(bnode->left);   
            }
            
            
            if(anode->right==NULL&&bnode->right!=NULL) return false;//check  right child
        
            if(anode->right!=NULL&&bnode->right==NULL) return false;
            
            if(anode->right!=NULL&&bnode->right!=NULL){
                a.push(anode->right);b.push(bnode->right);   
            }
            
        }
        
        return true;
        
    }
};
