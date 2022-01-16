class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        // queue<int> t;
        // int i;
        // for(i=0;i<tickets.size();i++)
        // {
        //   t.push(tickets[i]);  
        // }
        // int u, time=0,c=0;
        // while(tickets[k-1]!=0)
        // {
        //     c++;
        //     if(c>tickets.size())
        //         c=1;
        //     if(c==k)
        //         tickets[k-1]--;
        //     u=t.front();
        //         t.pop();
        //     if(u>0)
        //     {
        //         time++;
        //     }
        //     t.push(u-1);
        // }
        // return time;
        int sum=0, i;
        for(i=0;i<tickets.size();i++)
        {
            if(i<=k)
                sum+=min(tickets[k],tickets[i]);
            else
                sum+=min(tickets[k]-1,tickets[i]);
        }
        return sum;
    }
};