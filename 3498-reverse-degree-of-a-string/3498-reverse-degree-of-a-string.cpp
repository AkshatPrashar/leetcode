class Solution {
public:
    int reverseDegree(string str) {
        
        int sum=0,ans=1;
        int n=str.length();

        for(int i=0;i<n;i++){

            ans=('z'-str[i]+1)*(i+1);
            sum+=ans;

        }

        return sum;

    }
};