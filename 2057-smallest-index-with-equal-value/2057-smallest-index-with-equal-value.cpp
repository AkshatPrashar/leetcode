class Solution {
public:
    int smallestEqual(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++){

            if(i%10==arr[i]) return i;

        }

        return -1;

    }
};