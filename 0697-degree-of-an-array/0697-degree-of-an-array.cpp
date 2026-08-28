class Solution {
public:
    int findShortestSubArray(vector<int>& arr) {
        
        int n=arr.size();
        int left=0,right=0;
        map<int,int> mp;

        for(int x:arr) mp[x]++;
        int maxi=-1;
        for(auto it:mp){

            if(it.second>maxi) maxi=it.second;

        }
        mp.clear();
        int mini=INT_MAX;
        for(int i=0;i<n;i++){

            mp[arr[right]]++;

            while(mp[arr[right]]==maxi){
                
                mini=min(mini,right-left+1);
                mp[arr[left]]--;
                left++;

            }

            right++;

        }

        return mini;

    }
};