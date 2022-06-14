// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        long long int halfsum=0, i, res=0, currsum=0;
        for(i=0; i<N; i++)
        {
            halfsum+=Arr[i];
        }
        halfsum/=2;
        sort(Arr.begin(), Arr.end());
        reverse(Arr.begin(), Arr.end());
        for(i=0; i<N; i++)
        {
            res++;
            currsum+=Arr[i];
            if(currsum>halfsum)
                return res;
        }
        return res;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends