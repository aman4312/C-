// Time Complexity :o(2^n)
#include <bits/stdc++.h>

using namespace std;


void printSubarray(vector<int>a, int start, int end)
{
    if(end==a.size())return ;
    if(start>end)printSubarray(a,0,end+1);
    else {
        cout<<"[";
        for(int i=start ;i<end; i++)
            cout<<a[i]<<",";
        cout<<a[end]<<"]"<<endl;
        
        printSubarray(a,start,end+1);
    }
        
}

int main()
{
    vector<int>a{1,2,3,4};
   printSubarray(a,0,0);
   
   
    
}
