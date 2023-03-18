This includes the code for all the three traversal using single stack
TC:O(3*N)  SC:O(3*N)

Code:

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node( int val)
	{
		data=val;
		left=right=NULL;
	}
};
void def(Node* root)
{
	stack<pair<Node*, int>>s;
	vector<int>pre,inor,post;
	s.push({root, 1});
	while(!s.empty())
	{
		auto it=s.top();
		s.pop();
//		this is part of preorder 
//increment value from 1 to 2
//push the left side of the tree
		if(it.second==1)
		{
			pre.push_back(it.first->data);
			it.second++;
			s.push(it);
			if(it.first->left!=NULL)
			{
				s.push({it.first->left,1});
				
			}
		}
//		this is part of postorder
//increment 2 to 3
//push right side of the tree
		else if(it.second==2)
		{
			inor.push_back(it.first->data);
			it.second++;
			s.push(it);
			if(it.first->right!=NULL)
			{
				s.push({it.first->right,1});
				
			}
		}
//this is part of postorder
//dont push it again
		else
		{
			post.push_back(it.first->data);
		}
	}
	for(auto i:pre)cout<<i<<" ";
	cout<<endl;
	for(auto i:inor)cout<<i<<" ";
	cout<<endl;
	for(auto i:post)cout<<i<<" ";
}

int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->right=new Node(5);
	def(root);
	
}
