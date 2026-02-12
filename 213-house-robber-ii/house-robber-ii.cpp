class Solution {
public:
    int rob(vector<int>& nums) {
      int n=nums.size();
        vector<int>t(n+1,0);
        if(n==1)return nums[0];
        for(int i=1;i<=n-1;i++){
            int skip=t[i-1];
            int take=nums[i-1]+((i-2>0)?t[i-2]:0);
            t[i]=max(skip,take);
        }
        int result1=t[n-1];
        //jab first house ko skip kiya toh 
        t[0]=0;
        t[1]=0;
         for(int i=2;i<=n;i++){
            int skip=t[i-1];
            int take=nums[i-1]+((i-2>0)?t[i-2]:0);
            t[i]=max(skip,take);
        }
        int result2=t[n];
         return max(result1,result2);
    }
};