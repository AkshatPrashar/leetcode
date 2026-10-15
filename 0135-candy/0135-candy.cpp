class Solution {
public:
    int candy(vector<int>& arr) {

        int sum=1,i=1,n=arr.size();

        while(i<n){

            if(arr[i]==arr[i-1]){

                sum+=1,i++;
                continue;

            }

            int peak=1;
            while(i<n && arr[i]>arr[i-1]){

                peak++,sum+=peak,i++;

            }

            int possiblePeak=1;
            while(i<n && arr[i]<arr[i-1]){

                sum+=possiblePeak,possiblePeak++,i++;

            }
            if(possiblePeak>peak) sum+=possiblePeak-peak;

        }

        return sum;        

    }
};