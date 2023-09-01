#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
int n;
cin>>n;
while(n--){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i =0 ; i < x ;++i){
        cin>>v[i];
    }
    int c=0;
    for(int i = 0 ; i < x-1 ; ++i){
        int ma = max(v[i] , v[i+1]);
        int mi = min(v[i],v[i+1]);
        while(mi*2 <ma){
            c++;
            mi *=2;
        }
    }
    cout<<c<<"\n";

}

    return 0;
}
