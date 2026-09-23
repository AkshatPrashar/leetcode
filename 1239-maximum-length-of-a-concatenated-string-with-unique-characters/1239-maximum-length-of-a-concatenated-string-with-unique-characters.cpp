class Solution {
public:

    void fn(vector<string>& arr,int index,string cur,int& maxi){

        if(index==arr.size()){

            if(cur.size()>maxi) maxi=cur.size();
            return;

        }

        fn(arr, index + 1, cur, maxi);
        string s = cur;
        bool valid = true;

        for(char ch : arr[index]) {

            if(s.find(ch) != string::npos) {
                valid = false;
                break;
            }

            s += ch;
        }

        if(valid) {
            fn(arr, index + 1, s, maxi);
        }
    }

    int maxLength(vector<string>& arr) {

        int maxi=0;

        fn(arr,0,"",maxi);

        return maxi;
        
    }
};