class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& arr) {

        int n=arr.size();
        vector<int> mp(n,0);

        for(int x:arr) mp[x]++;

        vector<int> ans;

        for(int i=0;i<mp.size();i++){

            if(mp[i]==2) ans.push_back(i);

        }

        return ans; 

    }
};