#include <bits/stdc++.h>
using namespace std;
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int

int main() {
    maher;
   int n;
   cin>>n;
   while(n--){
       bool flage =false;
       map<int,int>mp;
       int t;
       cin>>t;
       if(t<3){
           for(int j=0 ; j<t ; j++){
               int m;
               cin>>m;
           }
           cout<<-1<<'\n';
       }else{
           for(int i = 0 ;i<t  ;i++){
               int x;
               cin>>x;
               mp[x]++;
           }

           for(auto it:mp){
               if(it.second >=3){
                   cout<<it.first<<'\n';
                   flage =true;
                   break;
               }

           }
           if(flage==false){
               cout<<-1<<'\n';
           }
       }






   }


    return 0;
}
