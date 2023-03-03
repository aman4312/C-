FInd the lca of the given two inputs
n1 = 3 , n2 = 4
           5    
          /    
         2  
        / \  
       3   4
Output: 2
  
Approach:
1. agar root =null so return null
2.ya to n1, n2 root ke eqal hoga so return root
3.traverse for left subtree and right subtree, maybe left==NULL mtlb value of n1 ,n2 right me hi h bus so return right ya return left agar right==null
4.agar dono null h i mean left==NULL ansd right==NULL so return root

code:
 Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       
       if(root==NULL)return NULL;
       if(root->data==n1 || root->data==n2)return root;
       Node* left = lca(root->left, n1,n2);
       Node* right = lca(root->right, n1,n2);
       if(left==NULL)return right;
       if(right==NULL)return left;
       
       return root;
    }
