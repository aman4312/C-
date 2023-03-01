Given a binary tree check if it is balanced or not means the height of each node should not be greater than 1
  Approach: find height of each node and meanwhile check for balanced tree condition
  tc: O(N)
  code:
    int height(Node* root)
    {
       if(root==NULL)return 0;
       else
       {
           int l=height(root->left);
           int r=height(root->right);
           if(l==-1 || r==-1)return -1;
           if(abs(l-r)>1)return -1;
           return max(l,r)+1;
       }
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //  Your Code here
        
        if(height(root)==-1)return 0;
        return 1;
    }
