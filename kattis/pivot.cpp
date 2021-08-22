#include <bits//stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;cin>>n;
    ll tmp;
    vector<ll> deq(n);
    vector<bool > po(n,false);
    int mii=0,mai=n-1;
    int counter=0;
    ll ma=INT_MIN,mi=INT_MAX;
    //po[0]=true;
    for (int i = 0; i < n; ++i) {
        cin>>tmp;
        if (tmp>ma){
            ma=tmp;
            mai = i;
            po[i]=true;
            //cout<<"turn on "<<i<<" "<<tmp<<endl;
        }
        else if (tmp<mi){
            mi=tmp;
            mii = i;
        }

        deq[i]=tmp;
    }
    ll sec_min=INT_MAX;
    //cout<<"test1"<<endl;
    for (int j = n-1; j >= 0  ; --j) {
        if(deq[j]<sec_min)
            {
                //cout<<"applied "<<j<<" "<<deq[j]<<endl;
                sec_min = deq[j];
                if(po[j])counter++;
            }

    }
    cout<<counter<<endl;


}
