class Solution {
public:
    int reverse(int x) {
        if(x==INT32_MIN){
            return 0;
        }
        bool negative =x<0;
        x=negative?-x : x;

        string str_x=to_string(x);
        string rev ="";
        for(int i= str_x.length()-1;i>=0;i--){
            rev.push_back(str_x[i]);
        }

        try{
            int value =negative? stoi("-" + rev) : stoi(rev);
            return value;
        }
        catch(const out_of_range&){
            return 0;
        }
    }
};