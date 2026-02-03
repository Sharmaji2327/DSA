class Solution {
public:
    int countPartitions(vector<int>& nums) {   
    int sum=accumulate(nums.begin(),nums.end(),0);
    //   x+y=sum
    //x-sum=y
    // x-y mujhe chahiye
    //x-sum+x
    //2x-sum so 2x toh hmesha even toh s agar even raha toh sara partition valid hai warna nahi
    if(sum%2==0)return nums.size()-1;
    return 0;
    
    }
};