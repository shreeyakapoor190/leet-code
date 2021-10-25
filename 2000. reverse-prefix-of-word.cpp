class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        int l = word.size(), i, p1 = 0, p2, flag = 0;
        char temp;
        for (i = 0; i < l; i++)
        {
            if (word[i] == ch)
            {
                p2 = i;
                flag = 1;
                break;
            }
        }
        if (flag != 1)
            return word;
        while (p1 <= p2)
        {
            temp = word[p1];
            word[p1] = word[p2];
            word[p2] = temp;
            p1++;
            p2--;
        }
        return word;
    }
};