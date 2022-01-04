class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int> map;
        int i;
        if (s.length() != t.length())
            return false;
        for (i = 0; i < s.length(); i++)
        {
            map[s[i]]++;
        }
        for (i = 0; i < s.length(); i++)
        {
            map[t[i]]--;
        }
        for (i = 0; i < map.size(); i++)
        {
            if (map[i] != 0)
                return false;
        }
        return true;
    }
};