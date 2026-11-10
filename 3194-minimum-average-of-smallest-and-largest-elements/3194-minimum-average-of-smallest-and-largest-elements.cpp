class Solution {
public:
    double minimumAverage(vector<int>& arr) {

        vector<double> av;
        sort(arr.begin(),arr.end());

        int i=0,j=arr.size()-1;
        while(i<=j){

            double a=(double)(arr[i]+arr[j])/2.0;
            av.push_back(a);
            i++,j--;

        }

        sort(av.begin(),av.end());
        return av[0];

    }
};