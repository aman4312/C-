Find all the permutation of the string
Using Stl:
int main()
{
  string s="ABC";
  sort(s.begin(), s.end());
  do{
    cout<<s<<" ";
  }while(next_permutation(s.begin(), s.end());
 }
 Time Complexity: O(n*n!)
 Auxillary SC:O(n)
         
         
 Approach 2:
  class Solution {
public:
    
//     Time compleity : O(n*n!)
    SC:O(n) + O(n)
    void permute(vector<vector<int>>&ans , vector<int>&nums, vector<int>&ds, vector<int>freq)
    {
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return ;
        }
        else
        {
            for(int i = 0 ; i < nums.size() ; i++){
                if(!freq[i]){
                    ds.push_back(nums[i]);
                    freq[i] = 1;
                    permute(ans, nums, ds, freq);
                    freq[i] = 0;
                    ds.pop_back();
                }
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>freq(nums.size() , 0) ;
        permute(ans, nums, ds, freq);
        return ans;
    }
};
         
3Rd approach:
 Time complexity : O(n*n!);
 Space Complexity:  O(n!), where n is the size of the input vector nums.
class Solution {
public:
    void recur(int index, vector<vector<int>>&ans, vector<int>&nums){
        if(index == nums.size()){
            ans.push_back(nums);
            return ;
        }
        else
        {
            for(int i = index ;i<nums.size() ;i++){
                swap(nums[index], nums[i]);
                recur(index+1, ans, nums);
                swap(nums[index], nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        recur(0, ans, nums );
        return ans;
    }
};
         
     

        
