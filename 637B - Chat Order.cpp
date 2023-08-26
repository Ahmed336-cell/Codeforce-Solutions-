#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);

using namespace std;
const int N=2e5+2;
map<string,int>mp;
string v[N];
int main() {
    maher;
    int n ;
    cin>>n;

        for(int i = 0; i <n ; i++){
            cin>>v[i];
        }
        for(int i = n  ;i>=0 ;i--){
            if(!mp[v[i]]) {
                cout << v[i] << endl;
                mp[v[i]] = 1;
            }

        }


    

    return 0;
}
