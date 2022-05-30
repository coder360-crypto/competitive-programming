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
void init_code(){
   
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
} 

void solve()
{
     
    
}
int main(int argc, char const *argv[]){
    //file_i_o();
    init_code();
    clock_t begin = clock();
    FIO;    
    int T;
    //T=1;
    cin>>T;
    while(T--){
        solve();
    }
    #ifndef ONLINE_JUDGE
        clock_t end = clock();
        cout<<"\n\n\nExecuted In: "<<double(end-begin)/CLOCKS_PER_SEC*1000<<" ms";
    #endif
}