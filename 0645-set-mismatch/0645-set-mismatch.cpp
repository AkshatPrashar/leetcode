class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        
        long long sumA=0,prodA=0;
        long long n=arr.size();
        long long  sumN=(n*(n+1))/2,prodN=(n*(n+1)*(2*n+1))/6;

        for(int x:arr){

            sumA+=x;
            prodA+=x*x;

        }

        long long sumies=sumN-sumA;
        long long prodies=prodN-prodA;
        long long plusies=prodies/sumies;
        long long a=(sumies+plusies)/2;
        long long b=a-sumies;

        return {(int)b,(int)a};

    }
};