class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int x=start;
        int y=goal;
        int flips=0;

        while(x>0 || y>0){

            int p=x%2,l=y%2;
            if(p!=l) flips++;
            x=x/2,y=y/2;

        }

        return flips;

    }
};