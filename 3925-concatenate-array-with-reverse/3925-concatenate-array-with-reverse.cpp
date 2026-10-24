class Solution {
public:
    vector<int> concatWithReverse(vector<int>& arr) {

        vector<int> ans;
        int n=arr.size();

        for(int i=0;i<n;i++) ans.push_back(arr[i]);
        for(int i=n-1;i>=0;i--) ans.push_back(arr[i]);

        return ans;

    }
};