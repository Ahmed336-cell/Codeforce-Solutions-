#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<int>b,c;
  int B=0,C=0;
  for(int i = 0 ; i < n ;i++){
      int f;
      cin>>f;
      if(f<0){
          c.push_back( f);
      }else{
          b.push_back(f);
      }
  }
  if(!c.empty()){
      for(int i = 0 ; i < c.size() ; i++){
          C+=c[i];
      }
  }
    if(!b.empty()){
        for(int i = 0 ; i < b.size() ; i++){
            B+=b[i];
        }
    }
  cout<<B-C;

    return 0;
}
