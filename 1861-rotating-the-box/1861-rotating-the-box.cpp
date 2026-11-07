class Solution {
public:

    void reverse(vector<char>& arr,int low,int high){

        while(low<high) swap(arr[low++],arr[high--]);

    }

    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {

        int n=box.size(),m=box[0].size();

        for(int i=0;i<n;i++){

            int left=0,right=0;
            while(right<m){

                while(right<m && box[i][right]=='#') right++;
                if(right==m) break;

                if(box[i][right]=='.' && box[i][left]=='#'){

                    swap(box[i][left],box[i][right]);
                    left++;
                    continue;

                }else if(box[i][right]=='*') left=right;
                left++;
                right++;

            }

        }

        vector<vector<char>> ans(m,vector<char>(n));
        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                ans[i][j]=box[j][i];

            }
            reverse(ans[i],0,n-1);

        }

        return ans;

    }
};