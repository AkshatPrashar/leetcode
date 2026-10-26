class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& arr, int k) {
        
        map<int,int> mp;
        int n=arr.size(),m=arr[0].size();

        for(int i=0;i<n;i++) mp[arr[i][k]]=i;

        vector<vector<int>> ans;

        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            
            ans.push_back(arr[it->second]);

        }

        
        return ans;

    }
};