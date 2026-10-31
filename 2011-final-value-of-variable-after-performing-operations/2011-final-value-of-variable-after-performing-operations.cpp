class Solution {
public:
    int finalValueAfterOperations(vector<string>& arr) {
        
        int n=arr.size();
        int ans=0;

        for(int i=0;i<n;i++){

            if(arr[i][1]=='+') ans++;
            else ans--;

        }

        return ans;

    }
};