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
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>  result;
       if(root==NULL)  return result;
       queue<TreeNode* > nodesQueue;
       nodesQueue.push(root);
       while(!nodesQueue.empty()){
        int size= nodesQueue.size();
        bool lefttoright = true;
        vector<int>row;
        for(int i=0;i<size;i++){
          TreeNode * node= nodesQueue.front();
          nodesQueue.pop();
          int index = (lefttoright)? i : size-i-1;
            row[index] = node->val;
            if(node->left) nodesQueue.push(root->left);
            if(node->right) nodesQueue.push(root->right);


        }
        lefttoright=!lefttoright;
        result.push_back(row);
       }
       return result;

    }

 vector<int> postorderTraversal(TreeNode* root) {
       stack<TreeNode*>st;
       vector<int>postorder;
       TreeNode* curr = root;
       TreeNode* temp;
      while(curr!=NULL || !st.empty()){
         if(curr!=NULL){
            st.push(curr);
            curr=curr->left;
         }
         else{
            temp=st.top()->right;
            if(temp==NULL){
                temp=st.top();
                st.pop();
                postorder.push_back(temp->val);
                while(!st.empty()&& temp==st.top()->right){
                    temp=st.top();
                    st.pop();
                    postorder.push_back(temp->val);
                }
            }
            else curr=temp;
         }
      }
  
     return postorder;
    }
     int maxDepth(TreeNode* root) {
        int x=0,y=0;
        if(root==NULL)return 0;
        x= maxDepth(root->left);
        y= maxDepth(root->right);

        return x>y?x+1:y+1;
    }
    TreeNode* buildTree(vector<int>& preorder,vector<int>&inorder){
        map<int,int>mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        
    }
 void flatten(TreeNode* root) {
      stack<TreeNode*>st;
      st.push(root);
      while(!st.empty()){
        TreeNode* curr=st.top();st.pop();
        if(curr->right) st.push(curr->right);
        if(curr->left) st.push(curr->left);
        if(!st.empty()) curr->right=st.top();

        curr->left=NULL;
      } 
    }
int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result = postorderTraversal(root);

    cout << "Postorder Traversal: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    cout<<maxDepth(root);

    return 0;
}