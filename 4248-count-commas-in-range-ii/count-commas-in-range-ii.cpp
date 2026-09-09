class Solution {
public:
    long long countCommas(long long n) {
        long long answer=0;
        long long count;
        long long threshold = 1000;
        while(threshold<=n){
            count = n - threshold + 1;
            answer+=count;
            threshold*=1000;
        }
        return answer; 
    }
};