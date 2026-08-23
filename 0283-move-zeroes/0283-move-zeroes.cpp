class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        
        int i=0,j=0,n=arr.size();

        while(j<n){

            if(arr[i]==0 && arr[j]){

                swap(arr[i],arr[j]);
                i++;
                j++;
                continue;

            }
            else if(arr[i]==0 && arr[j]==0){

                j++;
                continue;

            }

            i++,j++;

        }

    }
};