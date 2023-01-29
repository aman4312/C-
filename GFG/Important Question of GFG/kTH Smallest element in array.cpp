other 2 appraoches: 1- Sort  2: Priority_queue
------------------Using Quick Select-----------------
  Time Complexity: O(N2) in worst case and O(N) on average 
  Auxiliary Space: O(1)
  int partition(int A[],int low, int high )
{
    int i=low-1;
    int pivot=A[high];
    for(int j=low;j<=high-1;j++)
    {
        if(A[j]<pivot)
        {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[high], A[i+1]);
    return i+1;
}
    
    int kthSmallest(int arr[], int low, int high, int B) {
    while(low<=high)
    {
    int p=partition(arr,low,high);
    if(p==B-1)return arr[p];
    else if(p>B-1) high=p-1;
    else low=p+1;
    }
 }
