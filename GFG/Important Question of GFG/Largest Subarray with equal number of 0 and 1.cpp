Q1: Largest Subarray with equal number of 0 and 1 
Same question as largest subarray with given sum ,only trick is to replace all 0 with -1 ,and find largest subarray sum =0
Ex: 1, 0,1,1,1,0,0
Solution: 1,-1,1,1,1,-1,-1 ans:6(-1,1,1,1,-1,-1)
  
Approach: Map+prefix sum

Time Complexity:O(n)
SC:O(n) for map

code:
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>m;
        int sum=0;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==0)ans=i+1;
            if(m.find(sum)==m.end())m[sum]=i;
            if(m.find(sum)!=m.end())
            {
                ans=max(ans,i-m[sum]);
            }
        }
        return ans;
}
