class Solution {
public:
    bool check(vector<int>& nums) {
 int n=nums.size();
 vector<int>sorted(n);
 // pahla loop rotation find karenge
 for(int r=0;r<n;r++){
    // rotation
    int idx=0;
    for(int i=r;i<n;i++){
        sorted[idx]=nums[i];
        idx++;
    }
    for(int i=0;i<r;i++){
        sorted[idx]=nums[i];
        idx++;
    }
    // check if sortde hai ki nahi
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(sorted[i]>sorted[i+1]){
           flag= false;
           break;
        }
    }
    if (flag)return true;
 } 
 return false;      
    }
};