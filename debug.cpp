#include<bits/stdc++.h>
using namespace std;
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
void init_code(){
   
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
} 

void solve(){
    ll n; cin>>n;
    string s; cin>>s;
    ll k; cin>>k;
    char a[k];
    vector <ll> v;
    for(ll i = 0; i<k; i++) cin>>a[i];
    for(ll i = 0; i<k; i++){
        for(ll j = n-1; j>=0; j--){
            if(a[i] == s[j]){
                v.push_back(j);
                break;
            }
        }
    }
    sort(v.begin(), v.end());
   /*  for(int i = 0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;*/
    vector <ll> x;
    x.push_back(v[0]);
    for(int i = 0; i<v.size()-1; i++){
        x.push_back(v[i+1] - v[i]);
    }
    /*for(auto a:x){cout<<a<<" ";}cout<<endl;*/
    ll minm = *min_element(x.begin(), x.end());
    cout<<minm<<endl;

    return;
}
 
int main(){
    FIO;
    init_code();
    ll t = 1;
    cin>>t;
    while(t--){
        solve();
    }
 
    return 0;
}