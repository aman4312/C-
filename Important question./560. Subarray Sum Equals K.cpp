
//Given a array find count of subarray whose sum equals k
int subarraySum(vector<int>& nums, int k) { //O(n)
        int c=0;
        int prefix_sum=0;
        unordered_map<int,int>m;

        
        for(int i=0;i<nums.size();i++)
        {
             prefix_sum+=nums[i];
             if(prefix_sum==k)c++;
             if(m.find(prefix_sum-k)!=m.end())c+=m[prefix_sum-k];
             m[prefix_sum]++;

        }
        return c;
        
    }
