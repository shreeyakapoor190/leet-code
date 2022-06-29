class Solution {
public:
    int numTilePossibilities(string tiles) {
        vector<int> freq;
        string res;
        freq.resize(tiles.length(), 0);
        int count=0;
        unordered_map<string, int> m;
        solve(tiles, res, freq, count, m);
        return count-1; //starting me res string empty h to 1 kam karke return karna
    }
    void solve(string tiles, string res, vector<int> & freq, int &count, unordered_map<string, int> &m)
    {
        if(res.length()<tiles.length())
        {
            
            if(m.find(res)==m.end())
            {
                // cout<<res<<endl;
                count++;
                m[res]++;
            } 
            
        }
        else if(res.length()==tiles.length())
        { if(m.find(res)==m.end())
            {
                // cout<<res<<endl;
                count++;
                m[res]++;
                
            } 
            return;
        }
       
        for(int i=0; i<tiles.length(); i++)
        {
            if(freq[i]==0)
            {
                res+=tiles[i];
                freq[i]= 1;
                solve(tiles, res, freq, count, m);
                freq[i]=0;
                res.pop_back();
            }
        }
        return;
    }
   
};