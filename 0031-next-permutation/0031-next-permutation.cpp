class Solution {
public:

    void reverse(vector<int>& arr,int low,int high){

        while(low<high) swap(arr[low++],arr[high--]);

    }

    void nextPermutation(vector<int>& arr) {
       
       int index=-1,n=arr.size();

       for(int i=n-2;i>=0;i--){

        if(arr[i]<arr[i+1]){

            index=i;
            break;

        }

       }

       if(index==-1){

            reverse(arr,0,n-1);
            return;

       }

       for(int i=n-1;i>=index;i--){

            if(arr[i]>arr[index]){

                swap(arr[i],arr[index]);
                break;

            }

       }

       reverse(arr,index+1,n-1);
       return;

    }
};