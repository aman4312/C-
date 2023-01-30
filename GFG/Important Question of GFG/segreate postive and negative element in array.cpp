

----------------Quick sort partition Approach--------------
  Ex: a[]=[-12, 18, -10, 15] o/p: a[]=[-12, -10, 15, 18]
  TC:O(n)   SC:O(1)
   int main()
  {
    vector<int>a{-12, 18, -10, 15};
    int low=0,high=3;
    int i=low-1;
    int pivot=a[high];
    for(int j=low;j<=high-1; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    for(auto i:a)cout<<i<<" ";
    
  }
