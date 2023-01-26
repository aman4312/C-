-------------------Naive Approach------------
Tc: O(m+n)*log(m+n)
Sc: O(m+n)
Q1. Find union of two array such that is they have repeated elements the element should appear once:
  ex: a[]=[1,2,3,4,5] b[]=[3,4,5]    Output: c[]=[1,2,3,4,5]
  Code:
    int a[]={1,2,3,4,5};
    int b[]={1,2,3};
    int c[8];
    for(int i=0;i<5;i++)c[i]=a[i];
    for(int i=0;i<3;i++)c[5+i]=b[i];
    sort(c,c+8);
    for(int i=0;i<8;i++)
    {
        if(i==0 || c[i]!=c[i-1])
        {
            cout<<c[i]<<" ";
        }
    }

-------------------------Merge Function Approach----------------------
int main()
{
   int a[]={2,10,20};
   int b[]={30,40};
 
  int i=0,j=0;
  while(i<3 && j<2)
  {
      if(i>0 && a[i]==a[i-1])
      {
          i++;
          continue;
      }
      if(j>0 && b[j]==b[j-1])
        {
            
            j++;
            continue;
        }
      if(a[i]<b[j]){
          cout<<a[i]<<" ";
          i++;
      }
      else if(a[i]>b[j])
      {
          cout<<b[j]<<" ";
          j++;
      }
      else {
          cout<<a[i]<<" ";
          i++;
          j++;
      }
  }
  while(i<3){
      cout<<a[i]<<" ";
      i++;
  }
   while(j<2){
      cout<<b[j]<<" ";
      j++;
  }
}
