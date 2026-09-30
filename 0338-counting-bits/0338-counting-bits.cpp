class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans;

        for(int i=0;i<=n;i++){

            int x=i,cnt=0;
            while(x>0){

                int p=x%2;
                if(p) cnt++;
                x=x/2;

            }
            ans.push_back(cnt);

        }

        return ans;
        
    }
};