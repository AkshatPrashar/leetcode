class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        
        sort(arr.begin(),arr.end());

        vector<int> ans;
        int n=arr.size();

        for(int i=0;i<n;i++){

            if(arr[i]==target) ans.push_back(i);
            if(arr[i]>target) break;

        }

        return ans;

    }
};