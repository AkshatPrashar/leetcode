class Solution {
public:
    bool canJump(vector<int>& arr) {
        
        int z=0,n=arr.size();
        if(n==1) return true;
        for(int x:arr){

            if(x==0){

                z=1;
                break;

            }

        }

        if(!z) return true;

        int maxIndex=0;

        for(int i=0;i<n;i++){

            if(i+arr[i]>maxIndex) maxIndex=i+arr[i];
            if(i!=(n-1) && arr[i]==0 && maxIndex<=i) return false;

        }

        return true;

    }
};