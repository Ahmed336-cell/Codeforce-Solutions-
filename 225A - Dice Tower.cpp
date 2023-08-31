#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;


int main() {
    maher;
   int t,x;
   cin>>t>>x;
   int f = 1;
   while(t--){
       int a,b;
       cin>>a>>b;
       if(x==a||x==b||x == 7-a || x==7-b){
           f=0;
       }
       x= 7-x;

   }
   cout<<(f ? "YES":"NO")<<"\n";

    return 0;
}
