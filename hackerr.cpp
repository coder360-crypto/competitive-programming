#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll                      long long int
#define ld                      long double
#define mod                     10000000
#define inf                     1e9
#define endl                    "\n"
#define pb                      push_back
#define prs(s)                  cout<<s<<endl 
#define vi                      vector<ll>
#define vs                      vector<string>
#define pil                     pair<ll,ll>
#define ump                     unordered_map
#define mp                      make_pair
#define pq_max                  priority_queue<ll>
#define pq_min                  priority_queue<ll, vi , greater<ll>>
#define all(v)                  v.begin(), v.end()
#define ff                      first
#define ss                      second
#define mid(l,r)                l(l+(r-1)/2)
#define bitx(x)                 __builtin_popcount(x)
#define loop(i,a,b)             for(int i = (a);i<=(b);i++)
#define looprev(i,a,b)          for(int i = (a); i>=b; i--)
#define iter(c,it)              for(__typeof(c.begin()) it = c.begin();it!=c.end();it++) 
//#define log(args...)            { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it){}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args){
    cout<<*it<< "="<<a<<endl;
    err(++it, args...);
}
#define logarr(arr,a,b)         for(int i = a;i<=b;i++) cout<<arr[i]<<" ";;
template<typename T> T gcd(T a, T b){if(a%b) return gcd(b, a%b); return b;}
template<typename T> T lcm(T a, T b){return ((a*b)/gcd(a,b));}
vs tokenizer(string str, char ch ){std::istringstream var((str)); vs v; string t; while(getline((var), t, (ch))){v.pb(t);} return v;};
void init_code(){
   
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
} 
void prv(vector<ll>v){for(auto a:v){cout<<a<<" ";}cout<<endl;}
const ll p=998244353;
void inv(vector<ll>&v,ll n)
{
    for(ll i=1;i<=n;i++){ll a;cin>>a;v.pb(a);}
}
const double e= 1e-6;
const ll k=1e6;
void updated(vector<ll>&v,ll n)
{
    for(ll i=0;i<v.size();i++)
    {
        v[i]-=n;
    }
}
void solve()
{
   ll n,m;
   cin>>n>>m;
   char a[n][m];
   ll last=n;
   for(ll i=0;i<n;i++)
   {
     for(ll j=0;j<m;j++)
     {
          cin>>a[i][j];
     }
   }
   for(ll i=0;i<m;i++)
   {
    last=n;
     for(ll j=(n-1);j>=0;j--)
     {
        if(a[j][i]=='o')
        {
            last=j;
        }
        if(a[j][i]=='*')
        {
            swap(a[--last][i],a[j][i]);
        }
     }
   }
   for(ll i=0;i<n;i++)
   {
     for(ll j=0;j<m;j++)
     {
        cout<<a[i][j];
     }
     cout<<endl;
   }



}
int main(int argc, char const *argv[])
{
    //file_i_o();
    init_code();
    clock_t begin = clock();
    FIO;    
    int T;
    T=1;
    cin>>T;
    while(T--){
        solve();
    }
    #ifndef ONLINE_JUDGE
        clock_t end = clock();
        cout<<"\n\n\nExecuted In: "<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    #endif
}