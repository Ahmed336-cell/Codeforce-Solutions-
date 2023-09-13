#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    maher;
    int n;
    cin>>n;
    vector<int>h(n),a(n);
    int number =0 ;
    for(int i=0 ; i < n; i++){
        cin>>h[i]>>a[i];
        for(int   j= 0 ; j< i; j++){
            if(a[i] == h[j] ){
                number++;
            }
            if(a[j] == h[i]){
                number++;
            }
        }

    }
    cout<<number;
    return 0;
}
