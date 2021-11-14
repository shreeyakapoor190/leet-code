class Solution {
public:
    int numberOfMatches(int n) {
       long match = 0, team = n;
        while (team > 1)
        {
            if (team % 2 == 0)
            {
                match += (team / 2);
                team = team / 2;
            }
            else
            {
                match += ((team - 1) / 2);
                team = ((team - 1) / 2) + 1;
            }
        }
        return match;
    }
};