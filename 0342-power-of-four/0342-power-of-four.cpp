class Solution {
public:
    bool isPowerOfFour(int n) {

        if(n <= 0 || (n & (n - 1)) != 0) return false;

        int cnt=0;
        while(n>0){

            cnt++;
            int p=n%2;
            if(p==1 && cnt&1) return true;
            n=n/2;

        }

        return false;
        
    }
};