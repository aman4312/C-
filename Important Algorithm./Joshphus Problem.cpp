int josephus(int n, int k)
    {
       //Your code here
  int ans,index=0;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           v.push_back(i+1);            //create a vector to store n people
       }
         k--;                           // bcoz index start at 0
         while(v.size()!=1)               // till the last person remains
         {
             index=(index+k)%v.size();
             v.erase(v.begin()+index);
         }
         ans=v[0];
         return ans;
       
       
    }
