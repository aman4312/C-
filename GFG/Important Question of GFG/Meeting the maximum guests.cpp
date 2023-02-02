Q: Given the arrival array and departure time of thw guests ,you have to visit in the party in such a time so that u can visit maximum number of guests.
  ex: arr[]=[900, 600, 700]   dep[]=[1000, 800, 730]
  o/p: 2 (if   u visit at 600 and depart at 800 so u can meet the maximum guests.
  
 -------------------------------------Brute Force------------------------
 Intution : Sort both the arrays and consider one arrival and departure time and with that see how many guests u can meet, and return the max count.
          TC: O(2nlogn + n^2)=O(n^2)
 Code:
          int main()
{
  vector<int>arr{900,940,950, 1100, 1500, 1800};
  vector<int>dp{910, 1200, 1120, 1130, 1900, 2000};
  sort(arr.begin(), arr.end());
  sort(dp.begin(), dp.end());
    int n = arr.size();
  int ans=INT_MIN;
  
  
  int s,e;
  int arrival, end;
  for(int i=0;i<n;i++)
  {
      arrival = arr[i];
         end =  dp[i];
      int c=1;
      for(int j=i+1;j<n;j++)
      {
         if(arr[j]>=arrival && arr[j]<=end){
             c++;
             ans=max(ans,c);
            
         } 
         else
         {
             break;
         }
      }
  }
  cout<<ans;
  

    return 0;
}

          
------------------------------------Optimised Approach----------------------
Intution: use concept of merge function of merge sort;
TC: O(nlogn)
     
 Code:
         int countGuest(vector<int>arr, vector<int>dp)
{
        sort(arr.begin(), arr.end());
        sort(dp.begin(), dp.end());
        
        int i=1, j=0, res=1, cur=1;
        int n=arr.size();
        while(i< n && j< n)
        {
            if(arr[i]<=dp[j])
            {
                i++;cur++;
            }
            else
            {
                j++;cur--;
            }
            
            res=max(res, cur);
        }
        return res;
}
