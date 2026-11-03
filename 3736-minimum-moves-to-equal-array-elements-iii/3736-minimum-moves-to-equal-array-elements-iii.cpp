class Solution {
public:
    int minMoves(vector<int>& arr) {

        int maxi=INT_MIN;
        int moves=0;

        for(int x:arr) maxi=max(maxi,x);

        for(int x:arr){

            moves+=(maxi-x);

        }

        return moves;

    }
};