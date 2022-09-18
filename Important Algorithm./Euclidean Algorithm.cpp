//This algo is used to find the gcd of two numbers in Time Complexity: O(min(a,b))   Auxiliary Space: O(min(a,b))
/* Lets the first approach :
Approach : For finding GCD of two numbers we will  first find the minimum of the two numbers and then find the  highest common factor of that  minimum which is also the factor of the other number.
  #include<bits/stdc++.h>
  using namespace std;
   int gcd(int a,int b)
  {
	int res=min(a,b);
	while(res>0)
	{
		if(a%res==0 && b%res==0)
			break;
		res--;
	}
	return res;
  }
   int main()
  {
	int a,b;
	cin>>a>>b;
	cout<<"Gcd of two numbers"<<" "<<a<<"and"<<" "<<b<<"is :"<<" "<<gcd(a,b);
 
  }
  
  
  
  EFFICIENT APPROACH :
    class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    if(A==0)return B;
	    if(B==0)return A;
	    if(A==B)return A;
	    if(A>B)return gcd(A-B,B);
	    return gcd(A,B-A);
	} 
};
