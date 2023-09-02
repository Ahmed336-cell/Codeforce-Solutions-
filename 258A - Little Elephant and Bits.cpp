#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    maher;
    string s;
    cin>>s;
    int p = s.find('0');
    if(p==-1){
        cout<<s.substr(1);
    }else{
        cout<<s.substr(0,p)<<s.substr(p+1)<<'\n';
    }
    return 0;
}
