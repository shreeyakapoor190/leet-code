class Solution {
public:
    // static bool compare(vector<int>& a, vector<int>&b)
    // {
    //     return a[1] > b[1];
    // }
    // int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    //    sort(boxTypes.begin(), boxTypes.end(), compare);
    //    int capacity = 0;
    //     int maxBox = 0;
    //     int i = 0;
    //     while(capacity <=truckSize && i < boxTypes.size())
    //     {
    //         if (capacity + boxTypes[i][0] <= truckSize)
    //         {
    //             capacity += boxTypes[i][0];
    //             maxBox += boxTypes[i][1] * boxTypes[i][0];
    //         }
    //         else
    //         {
    //             maxBox += ( truckSize - capacity ) * boxTypes[i][1];
    //             break;
    //         }
    //         i++;
    //     }
    //     return maxBox;
    // }
     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int, int>> v;
         for(int i=0; i<boxTypes.size(); i++)
         {
             v.push_back({boxTypes[i][1], boxTypes[i][0]});
         }
          sort(v.begin(),v.end());
         reverse(v.begin(), v.end());
         int capacity = 0;
        int maxBox = 0;
        int i = 0;
        while(capacity <=truckSize && i < boxTypes.size())
        {
            if (capacity + v[i].second <= truckSize)
            {
                capacity += v[i].second;
                maxBox += v[i].first * v[i].second;
                // cout<<maxBox<<" "<<capacity<<endl;
            }
            else
            {
                maxBox += ( truckSize - capacity ) * v[i].first;
                // cout<<maxBox<<" ";
                break;
            }
            i++;
        }
        return maxBox;
     }
    
};