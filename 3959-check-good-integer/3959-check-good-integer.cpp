class Solution {
public:
    bool checkGoodInteger(int n) {

        long long dsum=0,dssum=0;

        while(n>0){

            int p=n%10;
            dsum+=p;
            dssum+=1LL*p*p;
            n=n/10;

        }

        return dssum-dsum>=50;
        
    }
};