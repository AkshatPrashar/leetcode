class Solution {
public:
    vector<int> createTargetArray(vector<int>& arr, vector<int>& index) {
        
        int n=arr.size();
        vector<int> ans(n+1,-1);

        for(int i=0;i<n;i++){

            int j=index[i];
            int z=arr[i];
            while(j<n+1 && ans[j]!=-1){
                
                int x=ans[j];
                ans[j]=z;
                z=x;
                j++;

            }

            ans[j]=z;

        }

        ans.pop_back();

        return ans;

    }
};