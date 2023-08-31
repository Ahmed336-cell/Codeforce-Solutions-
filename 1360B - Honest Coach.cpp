#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
  int a[100];
  int t,n;
  cin>>t;
  while(t--){
      cin>>n;
      for(int  i=0 ; i<n ;i++){
          cin>>a[i];
      }

      sort(a,a+n);
      vector<int>v;
      for(int  i = 1 ; i < n ; i++){
          v.push_back(a[i] - a[i-1]);
      }
      sort(v.begin(),v.end());
      cout<<v[0]<<"\n";
  }

    return 0;
}
