class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int k=0;
        int p=nums1.size();
        int q=nums2.size();
        for(int i=0;i<p;i++){
            nums3.push_back(nums1[i]);
        }
        for(int j=0;j<q;j++){
            nums3.push_back(nums2[j]);
        }
        
        int r=nums3.size();
        for(int i=0;i<r-1;i++){
            for(int j=0;j<r-1-i;j++){
                if(nums3[j]>nums3[j+1]){
                    swap(nums3[j],nums3[j+1]);
                }
            }
        }
        if(r%2==0){    
            return (nums3[r/2 -1]+nums3[r/2])/2.0;
        }else{
            return nums3[r/2];
        }
        
    }
};