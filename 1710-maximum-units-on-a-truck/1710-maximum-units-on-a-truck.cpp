class Solution {
public:
    static bool compare(vector<int>& a, vector<int>&b)
    {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       sort(boxTypes.begin(), boxTypes.end(), compare);
       int capacity = 0;
        int maxBox = 0;
        int i = 0;
        while(capacity <=truckSize && i < boxTypes.size())
        {
            if (capacity + boxTypes[i][0] <= truckSize)
            {
                capacity += boxTypes[i][0];
                maxBox += boxTypes[i][1] * boxTypes[i][0];
            }
            else
            {
                maxBox += ( truckSize - capacity ) * boxTypes[i][1];
                break;
            }
            i++;
        }
        return maxBox;
    }
};