#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;


int main() {
    maher;
   int num;
   cin>>num;
   int i=0 ,total=0;
   while(i<=num){
       total +=i;
       i++;
   }
   cout<<total;


    return 0;
}
