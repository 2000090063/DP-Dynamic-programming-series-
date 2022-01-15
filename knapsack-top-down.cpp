#include <bits/stdc++.h>
using namespace std;
int dp[100][100];

int kps(int  wt[],int v[],int n,int w)
{
     if(n==0 || w==0)
        return 0;
     else if(dp[n][w]!=-1)
     {
         return dp[n][w];
     }
    else
    {
       if(wt[n-1]<=w)
         {  
            dp[n][w]=max(v[n-1]+kps(wt,v,n-1,w-wt[n-1]),kps(wt,v,n-1,w));
         } 
      else
        dp[n][w]= kps(wt,v,n-1,w);
    }
    return dp[n][w];
}

int main() {     int n,w;
                 cin>>n;
                 int wt[n],v[n];
                 for(int i=0;i<n;i++)
                    cin>>wt[i];
                 for(int i=0;i<n;i++)
                    cin>>v[i];
                cin>>w;
                for(int i=0;i<n+1;i++)
{
    for(int j=0;j<w+1;j++)
    {
        if(i==0 || j==0)
         dp[i][j]=0;
         else
         dp[i][j]=-1;
    }
}
                int r=kps(wt,v,n,w);
                cout<<r;
                    
                 
	// your code goes here
	return 0;
}
