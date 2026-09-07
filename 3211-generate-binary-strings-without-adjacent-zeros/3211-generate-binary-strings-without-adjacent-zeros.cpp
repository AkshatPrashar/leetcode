class Solution {
public:

    void generateString(int n,string cur,vector<string> &arr){

        if(cur.length()==n){

            arr.push_back(cur);
            return;

        }

        generateString(n,cur+"1",arr);

        if(cur.empty() || cur.back()!='0'){

            generateString(n,cur+"0",arr);

        }

    }

    vector<string> validStrings(int n) {

        vector<string> arr;

        generateString(n,"",arr);

        return arr;
        
    }
};