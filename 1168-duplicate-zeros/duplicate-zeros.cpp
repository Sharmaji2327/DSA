class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        int n=nums.size();
      vector<int>result(n);
      int i=0,j=0;
      while(i<n && j<n){
        if(nums[j]!=0){
            result[i]=nums[j];
            i++;
            j++;
        }
        else {
            
            result[i]=0;
            i++;
            if(i<n)
            result[i]=0;
            i++;
            j++;
        }
      }
     for(auto i:result){
        nums=result;
     }
    }
};