class Solution {
public:
    int missingMultiple(vector<int>& arr, int k) {
        
        map<int,int> mp;

        for(int x:arr) mp[x]++;


        int i=1;
        for(i=1;;i++){

            if(!mp[i] && (i%k==0)) break;

        }

        return i;

    }
};