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
