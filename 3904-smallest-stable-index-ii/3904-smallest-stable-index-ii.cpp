class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        
        int n=arr.size();
        vector<int> frontMax;
        vector<int> backMin;

        int maxi=INT_MIN,mini=INT_MAX;

        for(int i=0;i<n;i++){

            frontMax.push_back(max(maxi,arr[i]));
            maxi=max(maxi,arr[i]);
            backMin.push_back(min(mini,arr[n-i-1]));
            mini=min(mini,arr[n-1-i]);

        }

        for(int i=0;i<n;i++){

            if(frontMax[i]-backMin[n-1-i]<=k) return i;

        }

        return -1;

    }
};