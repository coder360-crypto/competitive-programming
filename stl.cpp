#include<bits\stdc++.h>
using namespace std;
int main()
{   
   
    map<int,string>m;
    m[1]="ashish";
    m[3]="nishu";
    m[1000000]="gudiya";
    auto it=m.begin();
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    unordered_set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)

    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto q : s)
    {
        cout<<q<<"\n";
    }

}