class Solution {
public:
    int digitFrequencyScore(int n) {
        
        unordered_map<int,int> mp;

        int sum=0;
        while(n>0){

            int p=n%10;
            mp[p]++;
            n=n/10;

        }

        for(auto it:mp){

            sum+=(it.first*it.second);

        }

        return sum;

    }
};