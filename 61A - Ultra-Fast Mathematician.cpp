#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
#define  ll long long int
using namespace std;
int main() {
    maher;
    string s1,s2 , total;
    cin>>s1>>s2;
    for(int i = 0 ; i < s1.size();i++){
        if(s1[i] == '1' && s2[i]=='1' ){
            total+='0';
        }else if(s1[i] == '0' && s2[i]=='0' ){
            total+='0';
        }else{
            total+='1';
        }
    }
    cout<<total;



    return 0;
}
