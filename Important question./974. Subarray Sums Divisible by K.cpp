// find count of subarray with sum divisbile by k in O(n)
int subarraysDivByK(vector<int>& nums, int k) {
        int c=0;
        int prefix_sum=0;
        unordered_map<int,int>m;

        
        for(int i=0;i<nums.size();i++)
        {
             prefix_sum+=nums[i];
            if(prefix_sum%k==0)c++;
           int rem=prefix_sum%k;
               if(rem<0)rem+=k;
            if(m.find(rem)!=m.end())c+=m[rem];
            m[rem]++;

        }
        return c;
    }
