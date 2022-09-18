/*This is one of the most efficient algo to find the majority element in the array in o(n) time complexity and constant space;
ALGORITHM:
  Select the first element as the candidate key and if the next element is equal to the candidate element then increment the count else decrement the count.
  This actually means that we are decreasing the priority of winning ability of the selected candidate, since we know that if the candidate is a majority it occurs more than N/2 times and the remaining elements are less than N/2
  if the count becomes zero it means that there are same number if elements as that of the choosen candidate key which should not be the case hence we make the  current element
     as the candidate element and continue the same till the array size.
   The final candidate would be our majority element. We check using the 2nd traversal to see whether its count is greater than N/2.
    If it is true, we consider it as the majority element.*/
    
    Code:
        int main()
        {
          vector<int>a{1, 1, 1, 1, 1,1,1,5,4,3,2,1,6,7,8,9,10 };
          int candidate=0;
          int count=0;
          int votes=0;
          for(int i=1;i<a.size();i++)
          {
            if(a[i]==a[candidate])
          {
            count++;
          }
            else
          {
            count--;
          }
   
          if(count==0)
          {
           candidate=i;
            count=1;
          }
          }
        for(int i=0;i<a.size();i++)
          {
            if(a[i]==a[candidate])votes++;
           }
        if(votes>a.size()/2)cout<<a[candidate];
          cout<<-1;
}
