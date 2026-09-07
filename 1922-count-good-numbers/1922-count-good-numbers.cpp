class Solution {
public:

    const long long mod=1e9+7;

    long long power(long long x,long long n){

        long long pwr=n;
        long long ans=1;

        while(pwr>0){

            if(pwr%2==1){

                ans=(ans*x)%mod;
                pwr=pwr-1;

            }else{

                x=(x*x)%mod;
                pwr=pwr/2;

            }

        }

        return ans;

    }

    int countGoodNumbers(long long n) {

        long long oddInd=n/2;
        long long evenInd=n-oddInd;

        long long ans=power(4,oddInd);
        ans=(ans*power(5,evenInd))%mod;

        return ans;       
        
    }
};