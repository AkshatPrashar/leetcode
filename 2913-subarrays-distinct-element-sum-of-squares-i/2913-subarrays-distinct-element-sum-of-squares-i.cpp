class Solution {
public:
    int sumCounts(vector<int>& arr) {
        
        int n=arr.size();
        int sum=0;

        for(int i=0;i<n;i++){

            map<int,int> mp;
            int sq=0;

            for(int j=i;j<n;j++){

                if(mp.find(arr[j])==mp.end()) sq++;
                mp[arr[j]]=1;
                sum+=sq*sq;

            }

            

        }

        return sum;

    }
};