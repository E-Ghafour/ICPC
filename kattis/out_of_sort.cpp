#include <bits/stdc++.h>
#define ll long long
using namespace std;
int b_search(ll arr[],int lp,int up,ll target)
{
    if(lp>up) return -1;
    int mp = (lp+up)/2;
    if(arr[mp] == target) return mp;
    else if(target< arr[mp]) return b_search(arr,lp,mp-1,target);
    else return b_search(arr,mp+1,up ,target);
}
int main()
{
    int n;
    ll m,a,c,x0;cin>>n>>m>>a>>c>>x0;
    ll array[n];
    for (int i = 0; i < n; i++) {
        array[i] = (int)((a*x0+c)%m);
        x0 = array[i];
    }
    ll counter=0;
    for (int i = 0; i < n; i++) {
        if (b_search(array,0,n-1,array[i]) >= 0) counter++;
    }
    cout<<counter<<endl;
}
