class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                k++;
            }
        }
        if(nums[n-1]>nums[0]){
            k++;
        }
        return k<=1;
    }
};