#include<math.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int i=0,mod;
        long long r=0;
        if(x<0){
            return false;
        }else{
            
            while(x>0){
                r=r*10 + x%10;
                   x=x/10;
                }
                
            if(original==r)
                return true;
            else
                return false;
        
        
        }
       
    }
};