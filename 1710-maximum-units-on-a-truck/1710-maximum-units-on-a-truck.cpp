class Solution {
public:

    static bool comp(vector<int>& a,vector<int>& b){

        return (a[1])>(b[1]);

    }

    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        
        sort(arr.begin(),arr.end(),comp);
        
        int totalValue=0,n=arr.size();
        int weight=truckSize;

        for(int i=0;i<n;i++){

           if(arr[i][0]<=weight){

                weight-=arr[i][0];
                totalValue+=arr[i][0]*arr[i][1];

           }else{

                totalValue+=(weight*arr[i][1]);
                break;

           }

        }

        return totalValue;

    }
};