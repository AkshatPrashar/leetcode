class Solution {
public:

    void transpose(vector<vector<int>>& arr){

        int n=arr.size();

        for(int i=0;i<n;i++){

            for(int j=i;j<n;j++){

                swap(arr[i][j],arr[j][i]);

            }

        }

    }
    void reverse(vector<vector<int>>& arr){

        int n=arr.size();

        for(int i=0;i<n;i++){

            int low=0,high=n-1;
            while(low<high) swap(arr[i][low++],arr[i][high--]);

        }

    }

    void rotate(vector<vector<int>>& arr) {
        
        transpose(arr);
        reverse(arr);

    }
};