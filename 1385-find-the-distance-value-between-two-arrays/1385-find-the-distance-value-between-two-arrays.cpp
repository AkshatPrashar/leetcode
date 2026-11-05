class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int n=arr1.size(),m=arr2.size();
        int cnt=0;

        for(int i=0;i<n;i++){

            bool valid=true;
            for(int j=0;j<m;j++){

                int p=abs(arr1[i]-arr2[j]);
                if(p<=d) valid=false;

            }

            if(valid) cnt++;

        }

        return cnt;

    }
};