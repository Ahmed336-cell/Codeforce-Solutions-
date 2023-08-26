#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);

using namespace std;

int main() {
    maher;
   char w;
   cin>>w;
   string str,s ,let="qwertyuiopasdfghjkl;zxcvbnm,./";
   cin>>s;
   for(int i = 0 ; i <s.size() ; i++){
       auto in = let.find(s[i]);
       if(w=='R'){
           str+=let[in-1];
       }else{
           str+=let[in+1];
       }
   }
   cout<<str;


    return 0;
}
