class Solution {
public:
    bool halvesAreAlike(string s) {
        int l = s.size(), c1 = 0, c2 = 0,i;
        for (i = 0; i < l; i++)
        {
            if ((i < (l / 2)) && (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'))
                c1++;
            else if (i >= l / 2 && (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'))
                c2++;
        }
        if (c1 == c2)
            return true;
        else
            return false;
    }
};