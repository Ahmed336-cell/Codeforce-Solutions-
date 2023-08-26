#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);

using namespace std;

int main() {
    maher;
   map<string,int>mp;
   int n;
   cin>>n;
    while (n--){
        string s;
        cin>>s;
        if(!mp.count(s)){
            cout<<"OK"<<endl;
            mp[s]=0;
        }else{
            mp[s]+=1;
            cout<<s<<mp[s]<<endl;
        }
    }
    return 0;
}
