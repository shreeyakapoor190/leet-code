class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,int> r;
        unordered_map<int,int> g;
        unordered_map<int,int> b;
        unordered_map<int,bool> flag;
        int i,count=0;
        for(i=0;i<rings.length();i+=2)
        {
            // cout<<rings[i+1];
            if(rings[i]=='R')
                r[rings[i+1]]++;
            if(rings[i]=='G')
                g[rings[i+1]]++;
            if(rings[i]=='B')
                b[rings[i+1]]++;
        }
        
        for(i=1;i<rings.length();i+=2)
        {
            // cout<<b[rings[i]]<<" ";
            if(r[rings[i]] >0 && g[rings[i]]>0 && b[rings[i]]>0 && flag[rings[i]]==false)
            { count++;
             flag[rings[i]]=true;
        }}
         // cout<<endl;
        return count;
    }
};