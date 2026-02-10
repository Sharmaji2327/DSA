class Solution {
  public:
    void sort012(vector<int>& nums) {
        // code here
        int one=0;
        int zero=0;
        int end=nums.size()-1;
        while(one<=end){
            if(nums[one]==0){
                swap(nums[one],nums[zero]);
                zero++;
                one++;
            }
            else if(nums[one]==1){
                one++;
            }
            else if(nums[one]==2){
                swap(nums[one],nums[end]);
                end--;
            }
        }
        
    }
};