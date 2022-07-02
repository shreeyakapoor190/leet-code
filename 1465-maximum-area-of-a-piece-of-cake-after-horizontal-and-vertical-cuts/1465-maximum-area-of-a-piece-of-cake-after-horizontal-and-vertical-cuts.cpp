class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        long long int hmax=horizontalCuts[0], vmax=verticalCuts[0], i;
        for(i=1; i<horizontalCuts.size(); i++)
        {
            hmax= max(hmax, (long long int)(horizontalCuts[i]-horizontalCuts[i-1]));
        }
        for(i=1; i<verticalCuts.size(); i++)
        {
            vmax= max(vmax, (long long int)(verticalCuts[i]- verticalCuts[i-1]));
        }
        return (hmax*vmax)%1000000007;
    }
};