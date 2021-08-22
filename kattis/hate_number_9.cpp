#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
const ull module = 1000000007;
ull power(ull base, ull tavan){
    if(tavan == 0) return 1;
    if(tavan%2 == 0){
        ull sub=power(base, tavan/2);
        return (sub*sub)%module;
    }
    return (power(base, tavan-1)*base)%module;
}
int main(){
    int t;cin>>t;
    while(t--){
        ull d;cin>>d;
        ull res = power(9,d-1)*8;
        cout<<res%module<<endl;
    }
}
