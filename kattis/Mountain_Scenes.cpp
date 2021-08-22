#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int n,w,h;
const ll mod = 1e9+7;
ll memo[106][10006];
ll all(ll new_w,ll num)
{
    if(num<0) return 0;
    if(new_w > w) return 1;
    if(memo[new_w][num] != -1) return memo[new_w][num];
    else{
        ll clc=0;
        for (int i = 0; i <= h ; ++i) {
            clc += all(new_w+1,num - i);
        }
        return memo[new_w][num]=clc%mod;
    }
}
int main() {
    cin>>n>>w>>h;
//    if(h==1){
//        cout<<((1<<w)-2)%mod<<endl;
//        return 0;
//    }
//    if(n>=w*h)
//    {
//        cout<<long(pow(h+1,w)-(h+1))%mod<<endl;
//        return 0;
//    }
    for (int i = 0; i < w+1; ++i) {
        for (int j = 0; j <n+1 ; ++j) {
            memo[i][j] = -1;
        }
    }
//  cout<<mod<<endl;
    ll mountain = 0,plain=0;
    ull correct_size = min(n,w*h);
    plain = int(floor(correct_size/w)) + 1;
    mountain = all(1,n);
    if(mountain<0)
    {
        cout<<(mountain-plain+mod)%mod<<endl;
        return 0;
    } else{
        cout<<(mountain-plain)%mod<<endl;
        return 0;
    }

}
