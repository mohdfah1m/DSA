class Solution {
public:
    int countCommas(int n) {
        int answer=0;
        int count;
        int threshold = 1000;
        while(threshold<=n){
            count=0;
            for(int i=0;i<=n;i++){
                
                if(i>=threshold){
                    count ++;
                }
            }answer += count;
            threshold *=1000;
        }
        return answer;
    }
};