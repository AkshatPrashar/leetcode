class Solution {
public:
    bool checkDivisibility(int n) {

        long long dsum=0,dprod=1;

        int x=n;
        while(x!=0){

            int p=x%10;
            dsum+=p;
            dprod=(long long)dprod*p;
            x=x/10;

        }

        int ans=n%(dsum+dprod);
        return ans==0;

    }

};