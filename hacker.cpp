#include<bits/stdc++.h>
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
   int p=0;
   cin>>p;
   while(p--)
   {
      int w,h,n=0;
      w=h=n=0;
      cin>>w>>h;
      int a[4],b[4];
      b[4]={0};
      a[4]={0};
      for(int i=0;i<4;i++)
      {
         int max= -INT_MAX;
         int min= INT_MAX;
         a[4]={0};
         cin>>n;
         int v[n]={0};
         for(int j=0;j<n;j++)
         {
            cin>>v[j];
            if(v[j]>max)
            {
               max=v[j];
            }
            if(v[j]<min)
            {
               min=v[j];
            }

         }
         a[i]= max-min;
      }

      b[0]=a[0]*h;
      b[1]=a[1]*h;
      b[2]=a[2]*w;
      b[3]=a[3]*w;
      int p=b[0];
      for(int i=0;i<4;i++)
      {
        if(b[i]>p)
        {
         p=b[i];
        }
      }
      cout<<p<<endl;   
   }
}

   
   



for(int i=0;i<n;i++)
    {
      xl+=x[i];
      yl+=y[i];
    }
    cout<<xl+yl<<endl;

   

   




   
   


