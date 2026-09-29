class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        
        long long ans=0;

        for(int x:arr){

            ans=ans^x;

        }

        long long helper=(ans&(ans-1))^ans;

        int bucket_x=0,bucket_y=0;

        for(int x:arr){

            if(x&helper) bucket_x=bucket_x^x;
            else bucket_y=bucket_y^x;

        }

        return {bucket_x,bucket_y};

    }
};