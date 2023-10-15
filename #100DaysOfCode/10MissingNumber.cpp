class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing = nums.size();
        int i=0;
        
        for(int num:nums){
            missing ^= num;
            missing ^= i;
            i++;
        }
        
        return missing;
    }
};