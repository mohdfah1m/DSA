class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int  n=nums.size();
        int prefixSum=nums[0];
        for(int i=1;i<n && nums[i]==nums[i-1] + 1;i++){ 
            prefixSum+=nums[i];
            
        }
        unordered_set<int> preset(nums.begin(), nums.end());
        int element=prefixSum;
        while(preset.count(element)){
            element++;
        }
        return element;
    }
};