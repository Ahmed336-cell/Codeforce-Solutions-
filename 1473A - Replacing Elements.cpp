#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;


int main() {
    maher;
    ll t;
    ll n,d;
    cin>>t;
    while(t--){
        cin>>n>>d;
        vector<ll>v(n);
        for(ll  i= 0; i < n ;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        bool check = false;
        for(ll i = 1 ; i < n ; i++){
            if(v[i] + v[i-1]<=d){
                check = true;
                break;
            }
        }
        if(v[n-1] <=d || check){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }

    return 0;
}
