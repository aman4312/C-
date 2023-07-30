#include<bits/stdc++.h>
using namespace std;
class Stack{
	int size;
	int arr[100];
	int top;
	public:
		Stack(){
			top=-1;
			size = 100;
			
		}
		void push(int x){
			top++;
			arr[top]=x;
		}
		int pop(){
			int x = arr[top];
			top--;
			return x;
		}
		int Top(){
			return arr[top];
		}
};
int main(){
	Stack s;
	s.push(6);
	s.push(3);
	s.push(7);
	cout<<s.Top();
	s.pop();
	cout<<s.Top();
}
