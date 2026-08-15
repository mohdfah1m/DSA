class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        long long resultSum= (long long)n*(n+1)/2;
        long long actualSum=0;
        for(int num:nums){
            actualSum+=num;
        }
        return (int)resultSum - actualSum;
    }
};