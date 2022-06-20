class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string r;
        vector<string> res;
        if(digits.length()==0)
            return res;
        string mapping[10] ={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int index=0;
        solve(digits, r, res, mapping, index);
        return res;
    }
    void solve(string digits, string r, vector<string> &res, string mapping[], int index)
    {
        if(index >= digits.length())
        {
            res.push_back(r);
            return;
        }
        int d= digits[index] - '0'; //converting char of digit to actual int digit
        string digi= mapping[d];    //find which letters are mapped across the digit
        for(int i=0; i<digi.length(); i++)
        {
            r.push_back(digi[i]);
            solve(digits, r, res, mapping, index+1);
            r.pop_back();
        }
    }
};