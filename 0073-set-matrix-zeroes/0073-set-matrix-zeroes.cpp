class Solution {
public:

    void setZeroes(vector<vector<int>>& arr) {
        
        int colZero=1,n=arr.size(),m=arr[0].size();

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(!arr[i][j]){

                    if(j==0) colZero=0;
                    else{

                        arr[i][0]=0;
                        arr[0][j]=0;

                    }

                }

            }

        }

        for(int i=n-1;i>=1;i--){

            for(int j=m-1;j>=1;j--){

                if(!arr[i][0] || !arr[0][j]) arr[i][j]=0;

            }

        }

        if(!arr[0][0]){


            for(int i=0;i<m;i++) arr[0][i]=0;


        }

        if(!colZero){

            for(int i=0;i<n;i++) arr[i][0]=0;

        }

    }
};