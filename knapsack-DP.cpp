#include <bits/stdc++.h>
using namespace std;
int dp[100][100];


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
  for(int i=1;i<n+1;i++)
{
    for(int j=1;j<w+1;j++)
{
    if(wt[i]<=w)
    {
        dp[i][j]=max(v[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
        
    }
    else
    dp[i][j]=dp[i-1][j];
}
}
               cout<<dp[n][w];
                    
                 
	// your code goes here
	return 0;
}
