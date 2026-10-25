class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& arr) {
        
        int n=arr.size(),m=arr[0].size();
        vector<pair<int,int>> izo;
        vector<pair<int,int>> jzo;

        for(int i=0;i<n;i++){

            int ones=0,zeros=0;
            for(int j=0;j<m;j++){

                if(arr[i][j]) ones++;
                else zeros++;

            }

            izo.push_back({zeros,ones});

        }
        
        for(int i=0;i<m;i++){

            int ones=0,zeros=0;
            for(int j=0;j<n;j++){

                if(arr[j][i]) ones++;
                else zeros++;

            }

            jzo.push_back({zeros,ones});

        }

        vector<vector<int>> ans(n,vector<int>(m));

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                ans[i][j]=izo[i].second+jzo[j].second;
                ans[i][j]=ans[i][j]-izo[i].first-jzo[j].first;

            }

        }

        return ans;

    }
};