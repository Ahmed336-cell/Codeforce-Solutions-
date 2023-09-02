#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    int n, m;
    cin>>n;
    vector<int>v(n);
    for(int  i= 0 ; i <n ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll result=0;
    for(int  i =0; i < n ;   i++){
        result += abs(v[i] - (i+1));
    }
    printf("%I64d", result);
    return 0;
}
