class Solution {
public:
    string longestCommonPrefix(vector<string>& words) {
        
        string s=words[0];
        int n=words.size();
        int k=0;

        for(int i=1;i<n;i++){

            while(k<min(s.length(),words[i].length()) && s[k]==words[i][k]) k++;
            s=s.substr(0,k);
            k=0;

        }

        return s;

    }
};