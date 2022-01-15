#include <bits/stdc++.h>
using namespace std;
int kps(int  wt[],int v[],int n,int w)
{
     if(n==0 || w==0)
        return 0;
      else if(wt[n-1]<=w)
         return max(v[n-1]+kps(wt,v,n-1,w-wt[n-1]),kps(wt,v,n-1,w));
      else
        return kps(wt,v,n-1,w);
}

int main() {     int n,w;
                 cin>>n;
                 int wt[n],v[n];
                 for(int i=0;i<n;i++)
                    cin>>wt[i];
                 for(int i=0;i<n;i++)
                    cin>>v[i];
                cin>>w;
                int r=kps(wt,v,n,w);
                cout<<r;
                    
                 
	// your code goes here
	return 0;
}
