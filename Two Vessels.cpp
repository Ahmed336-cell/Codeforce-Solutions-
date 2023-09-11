#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    maher;
   int a,b,c,counter;
   int t;
   cin>>t;
   while(t--) {
       cin >> a >> b >> c;
       if (a < b) {
           swap(a, b);
       }
       counter = ((a - b + 1) / 2 + c - 1) / c;
       cout << counter<<'\n';
   }
    return 0;
}
