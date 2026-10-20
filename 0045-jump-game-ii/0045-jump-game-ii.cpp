class Solution {
public:
    int jump(vector<int>& arr) {
        
        int jumps=0,left=0,right=0;
        int n=arr.size();

        while(right<n-1){

            int farthest=0;

            for(int i=left;i<=right;i++){

                farthest=max(i+arr[i],farthest);

            }

            left=right+1;
            right=farthest;
            jumps++;

        }

        return jumps;

    }
};