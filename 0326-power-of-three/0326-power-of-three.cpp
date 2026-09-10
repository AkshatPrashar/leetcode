class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int x=n;
        if(x<1) return false;

        while(x>1){

            if(x%3!=0) return false;
            x=x/3;

        }

        return true;

    }
};