class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i, j, count, m=INT_MIN;
        for(i=0;i<sentences.size();i++)
        {
            count=0;
            for(j=0;j<sentences[i].length();j++)
            {
                if(sentences[i][j]==' ')
                    count++;
            }
            count++;
            m= max(m, count);
        }
        return m;
    }
};