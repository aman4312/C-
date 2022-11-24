// Time Complexity: O(N)
class Solution5 {
public:
    int partition(vector<int>&a, int low ,int high)
    {
        int pivot=a[high];
        int i=low-1;
        for(int j=low;j<=high-1;j++)
        {
            if(a[j]<pivot)
            {
                i++;
                swap(a[i],a[j]);
            }
            
        }
        swap(a[i+1],a[high]);
       return  i+1;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int low=0;
        int high=nums.size()-1;
       
        k=nums.size()-k;
        while(1)
        {
        
            int index=partition(nums,low,high);
           
            if(index==k)return nums[index];
            if(index < k) low=index+1;
            else high=index-1;
        }
        return 0;
        
        
    }
};

//Time Complexity: O(n+k*log(n))   MAx-HEap
class Solution3{
    public:
  int findKthLargest(vector<int>& nums, int k)
  {
      priority_queue<int>pq(nums.begin(),nums.end());
      for(int i=0;i<k-1;i++)pq.pop();
      return pq.top();
      
  }
};
//Time Complexity: O(nlog(n))   Sort

class Solution2{
    public:
    int findKthLargest(vector<int>& nums, int k)
    {
             sort(nums.begin(),nums.end(),greater<int>());
             return nums[k-1];
    }
    
};


// Time Complexity :O(n*k)
class Solution1{
    public:
    
    int findKthLargest(vector<int>& nums, int k)
    {

          for(int i=0;i<k-1;i++)
          {
             int  index=0;
              for(int j=0;j<nums.size();j++)
              {
                  if(nums[j]>nums[index])
                  {
                      index=j;
                      
                  }
              }
              nums[index]=INT_MIN;
          }
        
        return *max_element(nums.begin(), nums.end());
        
    }
    
};
// using MEan-Heap   Time Complexity: O(k+(n-k)logn)
class Solution{
    public:
    
     int findKthLargest(vector<int>& nums, int k)
     {
                   priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.begin()+k);
                    for(int i=k;i<nums.size();i++)
                    {
                        if(nums[i]>pq.top())
                        {
                            pq.pop();
                            pq.push(nums[i]);
                        }
                    }
         return pq.top();
     }
         
    
};
