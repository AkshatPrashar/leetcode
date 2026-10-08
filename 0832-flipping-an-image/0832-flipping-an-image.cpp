class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {

        int n=arr.size(),m=arr[0].size();

        for(int i=0;i<n;i++){

            int low=0,high=m-1;
            while(low<high){

                arr[i][low]=!arr[i][low];
                arr[i][high]=!arr[i][high];
                swap(arr[i][low++],arr[i][high--]);

            }

            if(m&1) arr[i][m/2]=!arr[i][m/2];

        }

        return arr;
        
    }
};