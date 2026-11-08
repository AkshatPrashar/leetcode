class Solution {
public:
    int countServers(vector<vector<int>>& arr) {
        
        int n=arr.size(),m=arr[0].size();
        
        vector<vector<int>> mp(n,vector<int>(m,0));

        int total=0;
        for(int i=0;i<n;i++){

            int cnt=0,pos=0;
            for(int j=0;j<m;j++){

                if(arr[i][j]){

                    cnt++;

                    if(cnt==1) pos=j;
                    else{

                        mp[i][j]=1;
                        mp[i][pos]=1;

                    }

                }

            }
            if(cnt>=2) total+=cnt;

        }

        for(int j=0;j<m;j++){

            int cnt=0,zeroMarked=0;
            for(int i=0;i<n;i++){

                if(arr[i][j]){

                    cnt++;
                    if(!mp[i][j]) zeroMarked++;

                }
                

            }

            if(cnt>=2) total+=(zeroMarked);

        }

        return total;

    }
};