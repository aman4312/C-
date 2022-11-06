//We can use this algo to find duplicates in array inn o(n) time complexity and o(1) space.
ALGO:
    int findduplicates(vector<int>a)
    {
       int slow=0;
      int fast=0;
      while(1)
      {
        slow=a[slow];
        fast=a[a[fast]];
        if(slow==fast) break;
      }
      slow=0;
      while(slow!=fast)
      {
        slow=a[slow];
        fast=a[fast];
        
      }
      return slow;
    }
