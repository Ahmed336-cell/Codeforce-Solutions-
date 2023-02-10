#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    vector<int> p,n,z;
    int t;
    cin>>t;
    for(int i = 0 ; i <t ;i++){
        int x;
        cin>>x;
        if (x>0){
            p.push_back(x);
        }
        if (x<0){
            n.push_back(x);
        }
        if (x==0){
            z.push_back(x);
        }
    }

    if (n.size() %2 == 0){
        int fi = n.back();
        n.pop_back();
        z.push_back(fi);
    }
    if (p.empty()){
        int f =n.back();
        n.pop_back();
        int s = n.back();
        n.pop_back();
        p.push_back(f);
        p.push_back(s);
    }

    cout<<n.size()<<" ";
    for(auto i : n){
        cout<<i<<" ";
    }
    cout<<"\n";

    cout<<p.size()<<" ";
    for(auto i : p){
        cout<<i<<" ";
    }
    cout<<"\n";

    cout<<z.size()<<" ";
    for(auto i : z){
        cout<<i<<" ";
    }
    cout<<"\n";

    return 0;
}
