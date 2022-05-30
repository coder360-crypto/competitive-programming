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
   stack<char>st;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
        if(s[i]=='(')
        {
         st.push(s[i]);
        }
        if(s[i]==')')
        {
         st.pop();
        }
    
    }
    if(st.empty()){cout<<"YES"<<endl;}else{ cout<<"NO"<<endl;}
 }
