class Solution {
public:
    int maxDepth(string s) {

        int level=0,maxi=0;
        for(char x:s){

            if(x=='(') level++;
            else if(x==')') level--;

            maxi=max(level,maxi);

        }
        return maxi;
        
    }
};