Algo:
treverse from back
if(nums[i]<nums[i+1]  index1=i;
traverse from back
if(nums[j]>nums[index1] index2=j;
swap(nums[index1],nums[index2]);
reverse(nums.begin()+index1+1,nums.end());
   
/* for ex: 1 3 5 4 2    next_permutation=1 4 2 3 5
here 3<5 so index1=1
again traverse from back 4>3 so index2=3
it means 3 must be swapped with 4 inorder to get next greater permutation  s array becomes 1 4 5 3 2 
in dictionary words are arranged from lower to higher rank so we need to reverse  5 3 2 : 2 3 5 this way rank also becomes low and we get our next greater permutation as 
(1 4 2 3 5) with its rank lower./*

   
