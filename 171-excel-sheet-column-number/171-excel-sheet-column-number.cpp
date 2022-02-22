class Solution {
public:
    int titleToNumber(string columnTitle) {
        long n, result=0;
      for(char c:columnTitle)
      {
          n= (int)c-64;
          // cout<<(int)c-64;
          result= result * 26 + n;
      }
        return result;
    }
};