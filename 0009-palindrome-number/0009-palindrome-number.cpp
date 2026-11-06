class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0) return false;
        long long num=0;
        int n=x;

        while(n){

            int p=n%10;
            num=num*10+p;

            n=n/10;

        }

        if(x==num) return true;
        return false;


    }
};