// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


 // } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
    //  Node *temp= head->next;
    //  Node *prev= head;
    //  unordered_map<int,int> m;
    //  m[head->data]++;
    //  while(temp && temp->next)
    //  {
    //      m[temp->data]++;
    //      if(m[temp->data]>1)
    //      {
    //          Node *del= prev->next;
    //          prev->next= prev->next->next;
    //          temp= prev;
    //          delete del;
    //      }
    //      else{
    //      temp= temp->next;
    //      prev= prev->next;
             
    //      }
    Node *res= new Node(0);
    Node *temp= head;
    Node *result= res;
    unordered_map<int, int> m;
    while(temp)
    {
        m[temp->data]++;
        if(m[temp->data]==1)
        {
            Node *newNode= new Node(temp->data);
            res->next= newNode;
            res= res->next;
        }
        temp= temp->next;
   }
     return result->next;
    }
};


// { Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}  // } Driver Code Ends