-------------------------------
It includes the itertative veersion of all the three traversal; 
-------------------------------
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
void recur_preorder(Node* root)
{
	if(!root)return ;
	cout<<root->data;
	
	recur_preorder(root->left);
	recur_preorder(root->right);
}
void iter_preorder(Node* root)
{
	stack<Node* >s;
	vector<int>ans;
	s.push(root);
	while(!s.empty()){
		root=s.top();
		s.pop();
		ans.push_back(root->data);
		if(root->right)
		s.push(root->right);
		if(root->left)
		s.push(root->left);
		
	}
	for(auto i:ans)cout<<i<<" ";
}


void iter_inorder(Node* root)
{
	stack<Node* >s;
	vector<int>ans;
	Node* node=root;
	while(true){
	if(node!=NULL)
	{
		s.push(node);
		node=node->left;
	}
	else
	{
		if(s.empty()==true)break;
		node=s.top();
		s.pop();
		ans.push_back(node->data);
		node=node->right;
	}
		
	}
	for(auto i:ans)cout<<i<<" ";
}

void iter_PostOrder(Node* root)
{
	stack<Node*>s1,s2;
	s1.push(root);
	vector<int>ans;
	while(!s1.empty())
	{
		root=s1.top();
		s2.push(root);
		s1.pop();
		if(root->left)s1.push(root->left);
		if(root->right)s1.push(root->right);
	}
	while(!s2.empty())
	{
		Node* top=s2.top();
		ans.push_back(top->data);
		s2.pop();
	}
		for(auto i:ans)cout<<i<<" ";
}

//post order using 1 stack
void iter_PostOrder2(Node* root)
{
	stack<Node*>s;
	vector<int>ans;
	Node* curr=root;
	while(curr!=NULL || !s.empty())
	{
		if(curr!=NULL)
		{
			s.push(curr);
			curr=curr->left;
		}
		else
		{
			Node* temp=s.top()->right;
			if(temp==NULL)
			{
				temp=s.top();
				s.pop();
				ans.push_back(temp->data);
				while(!s.empty() && temp==s.top()->right)
				{
					temp=s.top();
					s.pop();
					ans.push_back(temp->data);
				}
				
			}
			else
			{
				curr=temp;
			}
		}
	}
	for(auto i:ans)cout<<i<<" ";
}
int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->right=new Node(5);
	recur_preorder(root);
	cout<<endl;
	iter_preorder(root);
	cout<<endl;
	iter_inorder(root);
	cout<<endl;
	iter_PostOrder2(root);
	
}
