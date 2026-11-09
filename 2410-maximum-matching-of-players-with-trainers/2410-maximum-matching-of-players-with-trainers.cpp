class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());

        int i=0,j=0,cnt=0;
        int n=p.size(),m=t.size();

        while(i<n && j<m){

            if(p[i]<=t[j]){

                i++;
                j++;
                cnt++;

            }else j++;

        }

        return cnt;

    }
};