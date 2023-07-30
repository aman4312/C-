#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(int n ){
		this->data=n;
		this->next=NULL;
		
	}
};
class Stack{
	Node* top;
	public:
		Stack(){
			top= NULL;
		}
	void push(int data)
	{
		Node* temp = new Node(data);
		if(!temp)cout<<"overflow";
		else
		{
			
		temp->data= data;
		temp->next= top;
		top= temp;
	}
		
		
	}
	void pop(){
		Node* temp;
		if(top== NULL)cout<<"underflow";
		else
		{
			temp = top;
		top=top->next;
		free(temp);
	}
}
		
		void display(){
			Node* temp;
			temp = top;
			while(temp!= NULL){
				cout<<temp->data;
				temp = temp->next;
			}
		}
	
};
int main(){
	Stack s;
	s.push(11);
	s.push(22);
	s.pop();
	s.display();
}
