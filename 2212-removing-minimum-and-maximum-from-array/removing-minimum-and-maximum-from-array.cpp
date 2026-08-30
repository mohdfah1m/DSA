class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minVal=nums[0];
        int maxVal=nums[0];
        int minIndex=0;
        int maxIndex=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<minVal){
                minVal=nums[i];
                minIndex=i;
            }
            if(nums[i]>maxVal){
                maxVal=nums[i];
                maxIndex=i;
            }
        }
        int left=max(minIndex , maxIndex) + 1;
        int right = n - min(minIndex , maxIndex);
        int maxleft = (maxIndex + 1) + (n - minIndex);
        int maxright = (minIndex + 1) + (n - maxIndex);
        return min({left,right,maxleft,maxright});
    }
};