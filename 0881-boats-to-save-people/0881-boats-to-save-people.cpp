class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        
        sort(arr.begin(),arr.end());

        int boat=0,n=arr.size();

        int low=0,high=n-1;
        vector<int> hash(n,0);

        while(low<high){

            int sum=arr[low]+arr[high];

            if(sum<=limit){

                boat++;
                hash[low]=1,hash[high]=1;
                low++,high--;

            }
            else{

                high--;

            }

        }

        for(int x:hash){

            if(!x) boat++;

        }

        return boat;

    }
};