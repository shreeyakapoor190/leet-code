// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a, Job b)
    {
        return a.profit>b.profit;   //sorting in descending order of profit
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr+n, comp);
        
        bool done[n]= {false};  //array with all initial false values
        int job= 0, profit= 0;
        for(int i=0; i<n; i++)      //iterarte over the Job arr[]
        {
            for(int j= min(n, arr[i].dead-1); j>=0; j--)    //iterate over the done array to 
                                //find out if any position is empty
                                //here we set it as min of deadline-1 and no of jobs coz in some
                                //egs the deadline>jobs therefore it will lead to segmentation
                                //fault.
                                //we take deadline -1 coz array is 0 indexed and deadline given 
                                //starts from index 1
            {
                if(!done[j])
                {
                    job++;
                    profit+= arr[i].profit;
                    done[j]= true;
                    break;
                }
            }
        }
        return {job, profit};
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends