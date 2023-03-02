Given a tree find its right view
ex:       1
       /     \
     2        3
   /   \      /    \
  4     5   6        7
    \
     8
O/p:  1 3 7 8 
Approach: ans nodes are the last node of every level or first node if we traverse from right to left.
  Use reverse preorder tracersal
TC:O(h) height of the tre

Code:
 vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       fun(root,0,ans);
       return ans;
    }
    void fun(Node* root,  int level, vector<int>&ans)
    {
        if(root==NULL)return ;
        if(ans.size()==level)ans.push_back(root->data);
        fun(root->right, level+1, ans);
        fun(root->left, level+1, ans);
    }
