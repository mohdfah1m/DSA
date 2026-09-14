class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int r1_left = rec1[0];
        int r1_right = rec1[2];
        int r2_left = rec2[0];
        int r2_right = rec2[2];

        int left_overlap = max(r1_left,r2_left);
        int right_overlap = min(r1_right, r2_right);
        int width = right_overlap - left_overlap;

        if(width <=0)
            return false;
        
        int r1_bottom = rec1[1];
        int r1_top = rec1[3];
        int r2_bottom = rec2[1];
        int r2_top = rec2[3];

        int bottom_overlap = max(r1_bottom, r2_bottom);
        int top_overlap = min(r1_top, r2_top);

        int height = top_overlap - bottom_overlap;

        if(height <= 0)
            return false;

        return true;
    }
};
