class Solution {
public:
    int findPermutationDifference(string s, string t) {

        map<char,int> mp;

        for(int i=0;i<s.length();i++) mp[s[i]]=i;

        int sum=0;

        for(int i=0;i<t.length();i++){

            int a=abs(mp[t[i]]-i);
            sum+=a;

        }

        return sum;

    }
};