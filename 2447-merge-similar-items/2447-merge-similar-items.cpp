class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> map;
        for(int i=0;i<items1.size();i++){
           map[items1[i][0]]+=items1[i][1];
        }
        for(int i=0;i<items2.size();i++){
           map[items2[i][0]]+=items2[i][1];
        }
        int size=map.size();
        vector<vector<int>> arr(size,vector<int>(2,0));
        int j=0;
        for( auto i=map.begin(); i != map.end(); i++){
            arr[j][0]= i->first;
            arr[j][1]= i->second;
            j++;
        }
        return arr;


    }
};