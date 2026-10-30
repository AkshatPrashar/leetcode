class Solution {
public:
    int maxFreqSum(string s) {

        unordered_map<char,int> v;
        unordered_map<char,int> c;

        for(char x:s){

            if(x=='a' || x=='e' ||x=='i' || x=='o' || x=='u') v[x]++;
            else c[x]++;

        }

        int sum=0,maxi=0;
        for(auto it:c) maxi=max(maxi,it.second);

        sum+=maxi,maxi=0;
        for(auto it:v) maxi=max(maxi,it.second);
        sum+=maxi;

        return sum;

    }
};