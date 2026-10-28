class Solution {
public:
    int maxDistinct(string s) {

        vector<int> mp(26,0);

        int cnt=0,n=s.length();
        for(int i=0;i<n;i++){

            if(!mp[s[i]-'a']){

                cnt++;
                mp[s[i]-'a']=1;

            }

        }

        return cnt;
        
    }
};