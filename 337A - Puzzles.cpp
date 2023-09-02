#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    vector<int>v(m);
    for(int  i= 0 ; i <m ; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int t = v[n-1] - v.front();
    for (int i = 1; i <= m - n; ++i)
    {
        if (v[i+n-1] - v[i] < t)
        {
            t = v[i+n-1] - v[i];
        }
    }
    cout << t << endl;
    return 0;
}
