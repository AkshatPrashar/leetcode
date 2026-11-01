class Solution {
public:
    int minMoves(vector<int>& arr) {
        
        int mini=INT_MAX,n=arr.size();
        int moves=0;

        for(int x:arr) mini=min(x,mini);

        for(int i=0;i<n;i++){

            moves+=(arr[i]-mini);

        }

        return moves;

    }
};