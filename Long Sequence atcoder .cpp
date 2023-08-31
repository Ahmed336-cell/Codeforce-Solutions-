#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    const int max = 1e5+1;
    int v[max];
    maher;
    ll n , x , sum =0;
    cin>>n;
  for(int i = 1 ; i <=n ; i++){
      cin>>v[i];
      sum +=v[i];
  }
  cin>>x;
  ll b = (x/sum)*n;
  x%=sum;
  for(int  i = 1 ; i<=n;i++){
      x-=v[i];
      if(x<0){
          cout<<b+i;
          return 0;
      }
  }

    return 0;
}
