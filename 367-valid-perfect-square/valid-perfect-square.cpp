class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<0){
            return false;
        }
        if(num==1){
            return true;
        }
        long long half= num/2;
        bool result=false;
        for(long long i=1;i<=half;i++){
            if(i*i ==num){
                result =true;
            }
        }
        return result;
    }
};