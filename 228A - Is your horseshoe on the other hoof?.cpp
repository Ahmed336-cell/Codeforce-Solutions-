#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;


int main() {
    maher;
  int n=4,c=0;
  ll arr[15];
  for(int i = 0 ; i<n ; i++)
      cin>>arr[i];
  sort(arr,arr+n);
  for(int i = 0 ; i < n ; i++){
      if(arr[i] == arr[i+1]){
          c++;
      }
  }
  cout<<c;


    return 0;
}
