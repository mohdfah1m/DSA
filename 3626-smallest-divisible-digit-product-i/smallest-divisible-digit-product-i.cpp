class Solution {
public:
    int smallestNumber(int n, int t) {
        int i=n;
        for(int j=i;j<i+10;j++){
            if(j<10){
                if(j % t ==0)
                return j;
            }else{
            int left=j%10;
            int right=j/10;
            if((left * right) % t ==0)
                return j;
        }
        
        }return 0;
    }
};