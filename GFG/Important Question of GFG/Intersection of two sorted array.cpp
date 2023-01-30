-------------------------------Merge Function Approach---------------------
  //TC: O(m+n)
  int main()
{
 vector<int>a{10,20,20,40,60};
 vector<int>b{2,20,20,20};
 int i=0,j=0;
 while(i<5 && j<4)
 {
     if(i>0 && a[i]==a[i-1]){
         i++;continue;
     }
      if(a[i]<b[j])i++;
      else if(a[i]>b[j])j++;
      else {
          cout<<a[i]<<" ";
          i++;
          j++;
      }
     
 }
