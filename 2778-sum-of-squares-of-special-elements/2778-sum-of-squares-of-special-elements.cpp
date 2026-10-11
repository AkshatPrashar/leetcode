class Solution {
public:
    int sumOfSquares(vector<int>& arr) {
        
        int n=arr.size();
        long long sum=0;

        for(int i=0;i<n;i++){

            if(n%(i+1)==0){

                sum+=(arr[i]*arr[i]);

            }

        }

        return sum;

    }
};