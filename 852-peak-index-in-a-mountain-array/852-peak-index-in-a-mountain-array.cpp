class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m=INT_MIN, i;
        for(i=0;i<arr.size();i++)
        {
            m=max(m,arr[i]);
        }
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]==m)
                return i;
        }
        return -1;
    }
};