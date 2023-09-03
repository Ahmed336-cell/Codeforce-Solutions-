#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    maher;
    ll t,n;
    cin>>t;
    while(t--){
        string b,s;
        cin>>n>>b;
        for(ll i=0; i<n; i++){
            if(i > 0){
                if(b[i] == '1'){
                    if(b[i-1] == '1' && s[i-1] == '1'){
                        s += '0';
                    }
                    else{
                        s += '1';
                    }
                }
                else{
                    if(s[i-1] == '0' && b[i-1] == '1'){
                        s += '0';
                    }
                    else if(s[i-1] == '1' && b[i-1] == '0'){
                        s += '0';
                    }
                    else if(s[i-1] == '1' && b[i-1] == '1'){
                        s += '1';
                    }
                    else if(s[i-1] == '0' && b[i-1] == '0'){
                        s += '1';
                    }
                    else{
                        s += '0';
                    }
                }
            }
            else{
                s += '1';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
