#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return NULL;
        TreeNode*prev=NULL,*curr=root;
        while(curr!=NULL&&curr->val!=key){
            prev=curr;
            curr=curr->val>key?curr->left:curr->right;
        }
        if(curr==NULL)return root;
        else if(curr->left==NULL&& curr->right==NULL){
            if(prev==NULL)return NULL;
            if(prev->left==curr){
                prev->left=NULL;
                delete curr;
            }
            else if(prev->right==curr){
                prev->right=NULL;
                delete curr;
            }
        }
        else if(curr->left!=NULL&& curr->right==NULL){
            if(prev==NULL)return curr->left;
            if(prev->left==curr){
              curr=curr->left;
              prev->left=curr;
            }
            else if(prev->right==curr){
                curr=curr->left;
              prev->right=curr;
            }
        }
        else if(curr->left==NULL&& curr->right!=NULL){
            if(prev==NULL)return curr->right;
            if(prev->left==curr){
              curr=curr->right;
              prev->left=curr;
            }
            else if(prev->right==curr){
                curr=curr->right;
              prev->right=curr;
            }
        }
        else{
            TreeNode*temp=curr->right,*t=temp;
            while(temp){
                t=temp;
               temp=temp->left;
            }
            t->left=curr->left;
            prev->left==curr?(prev->left:prev->right)=curr->right;
            delete curr;
        }
    }
int main(){
    TreeNode *root=new TreeNode(5);
    root->left=new TreeNode(3);
    root->right=new TreeNode(6);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(4);
    deleteNode(root,3);

    
    return 0;
}