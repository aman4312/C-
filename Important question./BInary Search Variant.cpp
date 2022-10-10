// elemen5 less then x in array using binary search

using namespace std;

int main()
{
   vector<int>a{1,4,6,8,10};
 int low=0;
 int ans;
 int end=a.size()-1;
 while(low<=end)
 {
     int mid=(low+end)/2;
     if(a[mid]<9)
     {
         ans=mid+1;
         low=mid+1;
         
     }
     else end=mid-1;
    
     
     
 }
cout<<ans;
    return 0;
}
