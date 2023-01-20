// complexity: O(n*2^n)
void printSubsequence(vector<int>a){
vector<int>a{1,2,3,4};
    int size=pow(2,4);
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i&(1<<j)){
                cout<<a[j]<<" ";
            }
            
        }
        cout<<endl;
        
    }
}

----------------------****--------------------------------------------------------------
    
 Using Recursion
 TC: O(n*2^N)
 void printSubsequence(vector<int>a, vector<vector<int>>&nums, vector<int>output,int index )
{
    if(index>=a.size())
    {
        nums.push_back(output);
        return ;
    }
    // exclude
    
    printSubsequence(a, nums, output, index+1);
    
    //include
    
    int element= a[index];
    output.push_back(element);
    
    printSubsequence(a, nums, output, index+1);
}
int main()
{
   
    vector<int>a{1,2,3,4};
    vector<vector<int>>nums;
    vector<int>output;
    printSubsequence(a, nums, output, 0);
    for(auto i: nums)
    {
        for(auto j: i)
        {
            cout<<j<<" " ;
            
        }
        cout<<endl;
    }
}

