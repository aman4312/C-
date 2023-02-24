For Input: 
10 20 30 40 60 70 80 15 16
Expected Output: 
10 20 30 80 70 60 40 15 16
  
Approch: Level Order Traversal

TC: O(h) height of thr tree
sc: O(n) number of nodes
vector<int> findSpiral(Node *root)
{
    //Your code here
   vector<int> ans;
    if(root==NULL)
    return ans;
    queue<Node*> q;
    int level=0;
    q.push(root);
    while(!q.empty()){
      int size=q.size();
      vector<int> v;
      for(int i=0;i<size;i++){
          Node* front=q.front();
          q.pop();
          if(front->left!=NULL)
          q.push(front->left);
          if(front->right!=NULL)
          q.push(front->right);
          v.push_back(front->data);
      }
      if(level%2!=0)
      {
          for(auto it:v)
          ans.push_back(it);
      }
      else{
          reverse(v.begin(),v.end());
          for(auto it:v)
          ans.push_back(it);
      }
      level++;
    }
    return ans;
    }
    
