#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void init_code(){
   
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.in", "w", stdout);
    #endif 
}
int main()
{
init_code();
int t,n,p,q,r,k;
t=p=n=q=r=0;
cin>>t;
	
	while(t--)
	{
		p=n=q=r=0;
		k=1;
	cin>>n; 
	int v[n+1][3];
	for(int i=1;i<=n;i++)
	{
	cin>>v[i][1];
	}
	for(int i=1;i<n;i++)
	{
		p=0;

		for(int j=i+1;j<=n;j++)
		{
			if(v[i][1]==v[j][1])
			{
				p++;
			}
	
		}
		v[i][2]=(p+1);
		
    }
    v[n][2]=1;
    for(int i=1;i<n;i++)
	{

		for(int j=i+1;j<=n;j++)
		{
			if(v[i][1]==v[j][1])
			{
				v[j][2]=0;
			}
		}
		
		
    }
    for(int i=1;i<=n;i++)
	{

	
	cout<<v[i][1]<<"  "<<v[i][2]<<endl;	
		
    }

    for(int i=1;i<=n;i++)
    {
    	if(v[i][2]>1 && v[i][1]!=0)
    	{
    		q+=2;
    	}
    	else if(v[i][2]==1  && v[i][1]!=0)
    	{
    		q++;
    	}
    	else if(v[i][1]==0 && k<2)
    		{q++;
    			k++;}
    
    }
    cout<<q<<endl;
}
		
}
