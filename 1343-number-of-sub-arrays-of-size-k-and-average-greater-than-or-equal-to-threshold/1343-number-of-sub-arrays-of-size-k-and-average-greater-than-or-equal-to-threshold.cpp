class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int i, count=0;
    double sum=0.0,  avg;
        for(i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        avg=sum/k;
        if(avg>=threshold)
                count++;
        for(i=k;i<arr.size();i++)
        {
            sum+=arr[i]-arr[i-k];
            avg=sum/k;
            if(avg>=threshold)
                count++;
        }
        return count;
    }
};