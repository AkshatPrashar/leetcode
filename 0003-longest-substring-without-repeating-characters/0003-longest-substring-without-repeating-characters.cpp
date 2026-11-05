class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> mp(256,-1);
        int left=0,right=0,n=s.length();
        int maxi=0;

        while(right<n){


            if(mp[s[right]]>=left) left=mp[s[right]]+1;


            mp[s[right]]=right;

            maxi=max(maxi,right-left+1);
            right++;

        }

        return maxi;

    }
};