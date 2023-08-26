#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);

using namespace std;

int main() {
    maher;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>bottom(n),left(m);
        for(int i = 0 ; i < n ;i++)
            cin>>bottom[i];
        for(int i = 0 ; i < m ;i++)
            cin>>left[i];

        int ans =0;
        for(int i = 0 ; i < n ;i++){
            for(int j = 0 ; j < m ;j++){
                if(bottom[i] == left[j]){
                    ans++;
                }
            }

        }
        cout<<ans<<'\n';
    }


    return 0;
}
