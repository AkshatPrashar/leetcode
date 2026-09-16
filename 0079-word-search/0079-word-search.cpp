class Solution {
public:

    bool dfs(vector<vector<char>>& arr,string word,int i,int j,int index){

        if(index==word.size()) return true;

        if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size() || arr[i][j]!=word[index]) return false;

        char temp=arr[i][j];
        arr[i][j]='#';

        bool gotIt=dfs(arr,word,i,j+1,index+1) ||
        dfs(arr,word,i,j-1,index+1) || 
        dfs(arr,word,i+1,j,index+1) ||
        dfs(arr,word,i-1,j,index+1);

        arr[i][j]=temp;

        return gotIt;

    }

    bool exist(vector<vector<char>>& arr, string word) {
        
       int n=arr.size(),m=arr[0].size(); 
       for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(dfs(arr,word,i,j,0)) return true;

            }

       }

       return false;

    }
};