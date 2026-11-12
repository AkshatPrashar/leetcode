class Solution {
public:
    int totalFruit(vector<int>& arr) {

        int left=0,right=0,n=arr.size(),maxi=0;
        map<int,int> mp;

        while(right<n){

            mp[arr[right]]++;

            if(mp.size()>2){

                mp[arr[left]]--;
                if(mp[arr[left]]==0) mp.erase(arr[left]);
                left++;

            }

            if(mp.size()<=2) maxi=max(maxi,right-left+1);
            right++;

        }

        return maxi;

    }
};