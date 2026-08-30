class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        
        int frontDelmax=-1,backDelmax=-1,n=arr.size();
        if(n==1) return 1;
        int frontDelmin=-1,backDelmin=-1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int x:arr){

            mini=min(mini,x);
            maxi=max(maxi,x);

        }

        for(int i=0;i<n;i++){

            if(arr[i]==mini && frontDelmin==-1) frontDelmin=i+1;
            else if(arr[i]==maxi && frontDelmax==-1) frontDelmax=i+1;

            if((frontDelmin!=-1) && (frontDelmax!=-1)) break;

        }

        for(int i=n-1;i>=0;i--){

            if(arr[i]==mini && backDelmin==-1) backDelmin=n-i;
            else if(arr[i]==maxi && backDelmax==-1) backDelmax=n-i;

            if((backDelmin!=-1) && (backDelmax!=-1)) break;

        }

        int fromFront = max(frontDelmin, frontDelmax);
        int fromBack = max(backDelmin, backDelmax);
        int fromBoth = min(
            frontDelmin + backDelmax,
            frontDelmax + backDelmin
        );

        return min({fromFront, fromBack, fromBoth});

    }
};