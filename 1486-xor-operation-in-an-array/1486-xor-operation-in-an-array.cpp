class Solution {
public:
    int xorOperation(int n, int start) {

        int exor=0;
        int num=start;
        int cnt=0;

        while(cnt<n){

            num=start+2*cnt;
            exor=exor^num;
            cnt++;

        }

        return exor;

    }
};