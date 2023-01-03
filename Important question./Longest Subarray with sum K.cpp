//https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
Approach: Prefix sum+unordered map
Problem: Given a array of integers find the length of the largest subarray such that there sum is K
Ex: 8 3 1 5 -6 6 2 2  K=4
Output: 4 (-6+6+2+2)
prefix Sum: 8 11 12 17 11 17 19 21
i=0 sum=8 not equal to K put its first occurence in map because we want the largest length ie m[8]=0
i=1 sum=11 not equal to k and 11-K not in map so put m[11]=1
i=2 sum=12 not equal to k but 12-4=8 is in map that means there is a subarray presnt (3,1) m[12]=2 length=2-m[8]=2
i=3 sum=17 not equal to k and 17-4 not in map so m[17]=3
i=4 sum=11 not equal to k but 11 is already stored no need to store ,we need only first occurenece
i=5 sum=17 not equal to k and 17 is already in map 
i=6 sum=19 not equal to k and 19-4 not in map and 19 also so m[19]=6
i=7 sum=21 not equal to k but 21-4 already present in map with value 3 so length will be 7-3=4 ie (-6,6,2,2)
ans :4
  
Code:
int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int>m;
        int sum=0;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K)ans=i+1;
            if(m.find(sum)==m.end())m[sum]=i;
            if(m.find(sum-K)!=m.end())
            {
                ans=max(ans,i-m[sum-K]);
            }
        }
        return ans;
}

  
