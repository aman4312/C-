  
Time Complexity: O(N).

Reason: The time complexity will be O(H) + O(H) + O(N) which is ≈ O(N)

Space Complexity: O(N)
bool isLeaf(Node* root){

        return !root -> left && !root->right;

    }

    void addLeftBoundary(Node* root , vector < int > &res){

        Node* curr = root -> left;

        while(curr!= NULL){

            if(!isLeaf(curr)) res.push_back(curr -> data);

            if(curr -> left) curr = curr -> left;

            else curr = curr -> right;

        }

    }

    void addRightBoundary(Node* root , vector < int > &res){

        Node* curr = root -> right;

        vector < int > temp;

        while(curr != NULL){

            if(!isLeaf(curr)) temp.push_back(curr -> data);

            if(curr -> right) curr = curr -> right;

            else curr = curr -> left;

        }

        for (int i = temp.size() - 1; i >= 0; --i) {

            res.push_back(temp[i]);

        }

    }

    void addLeaves(Node* root , vector < int > &res){

        if(isLeaf(root)){

            res.push_back(root -> data);

            return;

        }

        if(root -> left) addLeaves(root -> left , res);

        if(root -> right) addLeaves(root -> right , res);

    }

    vector <int> boundary(Node *root)

    {
        //Your code here

        vector < int > ans;

        if(!root) return ans;

        if(!isLeaf(root)) ans.push_back(root -> data);

        addLeftBoundary(root , ans);

        addLeaves(root , ans);

        addRightBoundary(root , ans);

        return ans;

    }
