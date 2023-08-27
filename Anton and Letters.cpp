#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);

using namespace std;
int main() {
    maher;
    set<char>st;
    string s;
    getline(cin,s);
    for(int i =0 ; i< s.size() ; i++){
        if(s[i]>=97 && s[i]<=122){
            st.insert(s[i]);
        }
    }
    cout<<st.size();

    return 0;
}
