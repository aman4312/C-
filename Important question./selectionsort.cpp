Sort array in decreasing order using selection sort
#include<bits/stdc++.h>
using namespace std;
void fun(vector<int>a, int n)
{
	for(int i =0 ;i<n-1;i++){
	    int max_index = i;
	    for(int j = i+1 ;j< n;j++){
	        if(a[j]> a[max_index]){
                max_index = j;	            
	        }
	    }
	    swap(a[i], a[max_index]);
	}
	
	for(auto j=0;j< 5;j++)cout<<a[j]<<" "; 
}
int main(){
	vector<int>a{1,2,3,4,5};
	fun(a,5);
	
}
