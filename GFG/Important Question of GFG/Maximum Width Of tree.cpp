given a binary tree find the max width;
ex: 
          10
      /     \
    20      30
   /    \
  40    60
            
o/p: 2
Approach: DO level order traversal and calculate size of queue at each node then return the max width(bfs)
 TC: O(N) SC:O(n) whre n is number of nodes
 
 Code:
int getMaxWidth(Node* root) {

        // Your code here
        queue<Node*>q;
        q.push(root);
        int max_size=INT_MIN;
        while(!q.empty()){
            int s=q.size();
            max_size=max(max_size,s);
            for(int i=0;i<s;i++)
            {
                
            
            Node* front=q.front();
            q.pop();
            if(front->left)q.push(front->left);
            if(front->right)q.push(front->right);
            }
        }
        return max_size;
    }
