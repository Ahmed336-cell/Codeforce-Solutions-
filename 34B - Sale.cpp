#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for (int i = 0 ; i < n ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i = 0, sum =0;
    while(v[i]<=0){
        sum+=v[i];
        i++;
        if(i == m){
            break;
        }
    }
    cout<<sum*(-1);



    return 0;
}
