#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	   unordered_map<int,int>m;
	   int temp=0,ans=0;
	   m[0]=1;
	   for(int i=0;i<n;i++)
	   {
	       temp^=a[i];
	       if(m[temp]){
	           ans++;
	           m.clear();
	       }
	       m[temp]++;
	   }
	       
	       cout<<ans<<endl;
	}
	return 0;
}
