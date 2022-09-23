void sortcolors(vector<int>a)
{
  int i=0;
  int left=0;
  int right=a.size()-1;
  while(i<=right)
  {
    if(nums[i]==1)i+=1;
    else if(nums[i]==0)
    {
      swap(nums[i],nums[l]);
      i+=1;
      l+=1;
    }
    else{
      swap(nums[i],nums[right]);
      right--;
    }
  }
  
}
                 
