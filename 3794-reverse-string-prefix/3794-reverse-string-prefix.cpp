class Solution {
public:
    string reversePrefix(string s, int k) {
        
        int low=0,high=k-1;

        while(low<=high) swap(s[low++],s[high--]);

        return s;

    }
};