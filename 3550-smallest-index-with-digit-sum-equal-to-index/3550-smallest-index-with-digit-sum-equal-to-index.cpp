class Solution {
public:
    int smallestIndex(vector<int>& arr) {
        
        int n=arr.size();

        for(int i=0;i<n;i++){

            int x=arr[i],sum=0;
            while(x>0){

                int p=x%10;
                sum+=p;
                if(sum>i) break;
                x=x/10;

            }
            if(sum==i) return i;

        }

        return -1;

    }
};