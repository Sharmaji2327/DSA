class Solution {
  public:
    int search(vector<int>& nums, int x) {
        // codvector<int> v = {1, 3, 3, 3, 5, 7};

for(int i=0;i<nums.size();i++){
    if(nums[i]==x)return i;
}
    return -1;    
    }
};