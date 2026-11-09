class Solution {
public:
    int numSplits(string s) {
        
        int cnt=0,n=s.length();
        unordered_map<char,int> mpLeft;
        unordered_map<char,int> mpRight;

        for(int i=0;i<n;i++) mpLeft[s[i]]++;

        for(int i=n-1;i>=1;i--){

            mpLeft[s[i]]--;
            if(mpLeft[s[i]]==0) mpLeft.erase(s[i]);
            mpRight[s[i]]++;

            if(mpLeft.size()==mpRight.size()) cnt++;

        }

        return cnt;

    }
};